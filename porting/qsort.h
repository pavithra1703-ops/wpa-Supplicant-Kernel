
#ifndef __QSORT_H_
#define __QSORT_H_

#include <stddef.h>  // for size_t

static inline void swap_bytes(void *a, void *b, size_t size)
{
    unsigned char tmp;
    unsigned char *pa = a, *pb = b;
    for (size_t i = 0; i < size; i++) {
        tmp = pa[i];
        pa[i] = pb[i];
        pb[i] = tmp;
    }
}

static __maybe_unused void qsort_kernel(void *base, size_t n, size_t size,
                         int (*compar)(const void *, const void *))
{
    if (n < 2) return;

    char *arr = base;
    void *pivot = arr + (n - 1) * size;
    size_t i = 0;

    for (size_t j = 0; j < n - 1; j++) {
        if (compar(arr + j*size, pivot) < 0) {
            swap_bytes(arr + i*size, arr + j*size, size);
            i++;
        }
    }
    swap_bytes(arr + i*size, pivot, size);

    qsort_kernel(arr, i, size, compar);
    qsort_kernel(arr + (i + 1)*size, n - i - 1, size, compar);
}

#define qsort(base, nmemb, size, compar) \
    qsort_kernel((base), (nmemb), (size), (compar))

#endif

