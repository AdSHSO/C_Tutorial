#include <stdio.h>

int main()
{
    int *i_ptr;
    int i_val = 128;
    i_ptr = &i_val;
    printf("Value of i_val: %d\n", *i_ptr);
    *i_ptr = 256;
    printf("Value of i_val: %d\n", i_val);
    return 0;
}
