#include <stdio.h>

void func0(int an_i_val){
    an_i_val = 20;
}

void func1(int *an_i_val) { 
    *an_i_val = 20; 
    }

int main()
{
    int i_val = 10;
    func0(i_val);
    printf("Value after function call: %d\n", i_val);
    func1(&i_val);
    printf("Value after function call: %d", i_val);
    return 0;
}
