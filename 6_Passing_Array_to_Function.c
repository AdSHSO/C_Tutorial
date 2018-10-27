#include <stdio.h>

void init_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + i;
    }
    //no return statement needed -> void function
    //call by reference
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Position %d -> Value: %d\n", i, arr[i]);
    }
}
int main()
{
    int s = 4;
    int an_array[4];
    init_array(an_array, s);
    print_array(&an_array, s);
    //line 23 and 24 are identical in their meaning
    //we pass the address of the array
    return 0;
}
