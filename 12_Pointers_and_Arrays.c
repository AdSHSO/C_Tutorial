#include <stdio.h>

int main()
{
    int array[] = {10, 20, 20};
    int *array_ptr = array;
    printf("Current address: %p\n", array_ptr);
    printf("1st element: %i\n", *(array_ptr++));
    printf("Current address: %p\n", array_ptr);
    printf("2nd element: %i\n", *(array_ptr++));
    printf("Current address: %p\n", array_ptr);
    printf("3rd element: %i\n", *array_ptr);
    return 0;
}
