#include <stdio.h>int main(){    char *str1 = "Hello";    char str2[] = "World";    printf("%s ", str1);    str1 = str2; //Note: "Hello" is now gone....    printf("%s", str2);}
