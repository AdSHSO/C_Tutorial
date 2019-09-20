#include <stdio.h>
#include <string.h>

int main(void)
{
   struct Konto{
       char inhaber[10];
       int kontostand;
   };

   struct Konto konto_1;

   struct Konto *kto_ptr;
   kto_ptr = &konto_1;

   kto_ptr->kontostand = 1000;
   printf("%d\n", konto_1.kontostand);
   (*kto_ptr).kontostand = 1000;
   printf("%d", konto_1.kontostand);
   
   return 0; 
} 
