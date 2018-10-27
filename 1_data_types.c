#include <stdio.h>
#include <limits.h>

int main(void)
{
    short int h = SHRT_MIN;
    short int i = SHRT_MAX;
    signed short int j = 32767;
    unsigned short int k = 32767;
    printf("%d up to %d\n", h, i);
    j++;
    k++;
    printf("%d\n", j);
    printf("%d", k);
    return 0;
}
