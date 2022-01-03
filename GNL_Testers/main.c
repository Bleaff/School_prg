#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main()
{
    int    fd;
    fd = open("gnlTester/files/41_with_nl", O_RDONLY);
    //printf("%d - fd\n", fd);
    printf("%s", get_next_line(fd));
    //printf("\n0123456789012345678901234567890123456789\n");
}
