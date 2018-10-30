#include <string.h>

//usefull string processing functions
#include <stdio.h>

int main()
{
    char s1[] = "AAA";
    char s2[] = "BBB";
    char s3[2];
    strcpy(s1, s2);
    printf("New s1: %s", s1); 
    
    //So this works        
    strcpy(s1,s3);    
    printf("New s3: %s", s1);    
    
    //Ouch....
}
