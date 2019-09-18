#include <stdio.h>

int *func(void)
{
    static int an_array[3] = {1, 2, 3};
    printf("Start address of array: %p\n", &an_array);
    return an_array;
}
int main()
{
    int *ret_arr = func();
    printf("Start address of array: %p\n", ret_arr);
    printf("1st value: %d\n", *(ret_arr++));
    printf("2nd value: %d\n", *(ret_arr++));
    printf("3rd value: %d\n", *(ret_arr++));
    return 0;
}
