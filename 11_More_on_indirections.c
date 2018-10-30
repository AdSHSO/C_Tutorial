#include <stdio.h>

int main()
{
    int *i_ptr1;
    int **i_ptr2;
    int i_val = 128;
    i_ptr1 = &i_val;
    i_ptr2 = &i_ptr1;
    printf("Value of i_val: %d\n", *(*i_ptr2));
    printf("Value of i_val: %d\n", *i_ptr1);
    printf("Value of i_val: %d\n", i_val);
    printf("Address of i_val: %p\n", i_ptr1);
    printf("Address of i_val: %p\n", *(i_ptr2));
    printf("Address of i_val: %p\n", &i_val);
    return 0;
}
