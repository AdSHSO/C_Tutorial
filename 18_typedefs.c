#include <stdio.h>

typedef unsigned int UINT32;
typedef unsigned short UINT16;

int main(void)
{
   UINT32 i = 0;
   UINT16 j = 0;

   printf("sizeof(UINT32) = %d\n", sizeof(UINT32));
   printf("sizeof(UINT16) = %d\n", sizeof(UINT16));
}

