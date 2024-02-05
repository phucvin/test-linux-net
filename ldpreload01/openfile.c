#include <stdio.h>
#include <errno.h>

int main(void) {
    printf("Calling the fopen() function...\n");

    FILE *fd = fopen("test.txt","r");
    if (!fd) {
        printf("fopen() returned NULL, errno: %d\n", errno);
        return 1;
    }

    printf("fopen() succeeded\n");

    return 0;
}