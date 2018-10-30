#include <stdio.h>

int main(){    
    char s1[6] = "String";    
    
    //\0 will be added when memory is allocated        
    char s2[6] = {'S','t','r','i','n','g'};    
    
    //\0 will be added when memory is allocated        
    char s3[6] = {'S','t','r','i','n','g','\0'};    
    
    //\0 is explicitely added         
    char s4[6] = {'S','t','r','i','n','g','s','s','s','\0'};   
    
    //Will only give you a compiler warning        
    printf("S1: %s\n", s1);    
    printf("S2: %s\n", s2);    
    printf("S3: %s\n", s3);    
    printf("S4: %s\n", s4);    
    printf("Single value: %s", s4[6]);    
    
    //Nothing to read here....        
    return 0;
}
