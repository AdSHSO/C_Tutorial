#include <stdio.h>

void bin(unsigned int n) 
{ 
    unsigned int i; 
    for (i = 1 << 31; i > 0; i = i / 2) 
        (n & i)? printf("1"): printf("0"); 
} 

int main(void){
    union vierByte {
	   unsigned int zahl;
	   char zeichen[4];
	} x;

	x.zahl = 32123;
	bin(x.zahl);
    printf("\n");
    bin(x.zeichen[1]);
}
