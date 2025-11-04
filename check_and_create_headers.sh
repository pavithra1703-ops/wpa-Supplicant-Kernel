#!/bin/bash

# Directory where missing headers should be created
PORTING_DIR="./porting"

# Ensure the porting directory exists
mkdir -p "$PORTING_DIR"

# Read each unique #include line
grep -rni "#include " ./ | cut -f 3 -d ":" | sort | uniq | while read -r line; do
    # Extract header path (strip quotes and <>)
    header_path=$(echo "$line" | grep -oE '[A-Za-z0-9_/-]+\.h')

    # Skip empty lines
    [ -z "$header_path" ] && continue

    # Get just the filename
    header_file=$(basename "$header_path")

    # Search if header exists anywhere (ignore porting dir)
    found=$(find . -type f -name "$header_file" | grep -v "$PORTING_DIR")

    if [ -z "$found" ]; then
        # Create necessary directories inside porting
        full_path="$PORTING_DIR/$header_path"
        mkdir -p "$(dirname "$full_path")"

        echo "❌ Missing: $header_path → creating $full_path"

        # Create include guard
        guard=$(echo "$header_path" | tr '[:lower:]./' '[:upper:]__')
        {
            echo "#ifndef __${guard}_"
            echo "#define __${guard}_"
            echo ""
            echo "#endif "
        } > "$full_path"
    else
        echo "✅ Found: $header_path"
    fi
done

