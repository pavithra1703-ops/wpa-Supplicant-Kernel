/* porting/file_ops_stub.h */
#ifndef __FILE_OPS_STUB_H
#define __FILE_OPS_STUB_H

/* Stub for rename() - does nothing in kernel-space */
static inline int rename(const char *oldname, const char *newname)
{
    return 0; /* pretend success */
}

/* Stub for chmod() - does nothing in kernel-space */
static inline int chmod(const char *path, unsigned int mode)
{
    return 0; /* pretend success */
}

#endif /* __FILE_OPS_STUB_H */

