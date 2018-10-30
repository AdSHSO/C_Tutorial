#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a, *pa;
    int i, size;
    printf("Enter the size of the array:\n");
    scanf("%i", &size);
    a = (int *)malloc(size * sizeof(int));
    if (a != NULL)
    {
        pa = a;
        for (i = 0; i < size; ++i)
        {
            *pa++ = rand();
            printf("Pointer Adress: %p\n", pa);
        }
        for (i = 0; i < size; ++i)
            printf("a[%d] = %d\n", i, a[i]);
    }
    else
    {
        perror("Out of memory!!!");
        abort();
    }
    free(a);
}
