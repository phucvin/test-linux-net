#include <stdio.h>
#include <errno.h>

FILE *fopen(const char *path, const char *mode) {
    printf("Always failing fopen\n");
    errno = ENOSYS;
    return NULL;
}