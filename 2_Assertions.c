#include <assert.h>
#include <stdio.h>
#include <limits.h>

_Static_assert(INT_MAX==2147483646, "NEIN: INT_MAX ist 2147483647!");

int main(void)
{
    int i = INT_MAX;
    printf("%d",i);
    return 0;
}