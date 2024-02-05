#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void) {
    printf("Calling the fopen() function...\n");

    FILE *fd = fopen("test.txt","r");
    if (!fd) {
        printf("fopen() returned NULL, errno: %s\n", strerror(errno));
        return 1;
    }

    printf("fopen() succeeded\n");

    return 0;
}