#include <stdio.h>

int main()
{
    int an_array[3];
    printf("Size of Array: %d bytes\n", sizeof(an_array));
    an_array[0] = 10;
    printf("Array value position 0: %d\n", an_array[0]);
    printf("Array value position 1: %d\n", an_array[1]); 
    //printf ("Array value position 3: %d\n", an_array[3]);  
    //still a ery common programming error...  
    //especially in a for / while loop  
    
    int another_array[3]={21,22,23};  
    //immediate initialization  

    const int immutable_array[4]={127,0,0,1};      
    //values can not be changed    
    
    return 0;
}
