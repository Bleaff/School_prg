#include <stdio.h>
#include "ft_printf.h"

int main()
{
    printf("ORIG:%u - u\n", -1);
    ft_printf("ORIG:%u - u\n", -1);
}