#include <stdio.h>

void bin(unsigned int n) 
{ 
    unsigned int i; 
    for (i = 1 << 3; i > 0; i = i / 2) 
        (n & i)? printf("1"): printf("0"); 
} 

int main(void)
{
    struct time {
	    unsigned int hour:	5;
	    unsigned int minute:	6;
    } myTime;

myTime.hour = 11;
myTime.minute = 55;

printf("Es ist jetzt %02d:%02d Uhr?\n", myTime.hour, myTime.minute );
bin(myTime.hour);
 
} 