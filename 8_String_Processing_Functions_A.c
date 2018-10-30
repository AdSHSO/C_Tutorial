#include <stdio.h>

intmain()
{
    char text[10] = "abcdefg";
    printf("%s\n", text);
    text[3] = '\0';
    printf("%s\n", text);
    return 0;
}
