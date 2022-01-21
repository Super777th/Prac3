#include <stdio.h>

#ifndef strlcpy
#define strlcpy(dst,src,sz) snprintf((dst), (sz), "%s", (src))
#endif

enum { BUFFER_SIZE = 10 };

int main() {
    char dst[BUFFER_SIZE];
    char src[] = "abcdefghijk";

    int buffer_length = strlcpy(dst, src, BUFFER_SIZE);

    if (buffer_length >= BUFFER_SIZE) {
        printf("String too long: %d (%d expected)\n",
                buffer_length, BUFFER_SIZE-1);
    }

    printf("String copied: %s\n", dst);

    return 0;
}
