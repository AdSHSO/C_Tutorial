#include <stdio.h>

int main()
{
    int (*fptr)(const char *, ...);
    fptr = printf;
    (*fptr)("Hello World over a function pointer calling printf()\n");
    return 0;
}
