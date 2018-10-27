#include <stdio.h>

int global_i;
void counter(void)
{
    int local_i;
    local_i++;
    static int local_j;
    local_j++;
    global_i = local_j;
    printf("local_j: %d\n", local_j);
}
int main()
{
    global_i = 1;
    counter();
    counter();
    counter();
    printf("global_i: %d\n", global_i);
    return 0;
}
