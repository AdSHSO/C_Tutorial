#include <stdio.h>

void empty(void) { printf("I am empty\n"); }
void withparameter(int i) { printf("I received a parameter %d\n", i); }
int recv_ret(int i)
{
    printf("I received a parameter %d\n", i);
    i++;
    printf("and will return %d\n", i);
    return i;
}
int main()
{
    int i = 10;
    empty();
    withparameter(i);
    i = recv_ret(i);
    printf("It did return %d", i);
    return 0;
}
