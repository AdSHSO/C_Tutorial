#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pin[5];
    printf("Your 4 character password: ");
    scanf("%s", pin); 
    
    // better do %4s and if statement for input check    
    printf("Your password: %s\n", pin);    
}
