#include <stdio.h>

void func(int *an_i_val) { *an_i_val = 20; }
int main()
{
    int i_val = 10;
    func(&i_val);
    printf("Value after function call: %d", i_val);
    return 0;
}
