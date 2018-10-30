#include <stdio.h>

int main()
{
    int *i_ptr;
    int i_val = 128;
    i_ptr = &i_val;
    printf("Memory Address: %p\n", &i_ptr);
    printf("Memory Address: %p\n", i_ptr);
    printf("Memory Address: %p\n", &i_val);
    return 0;
}
