#include <stdio.h>
#include <string.h>

int main(void)
{
   struct Konto{
       char inhaber[10];
       int kontostand;
   };

   struct Konto kunde01 = {"Meier", 500};

   struct Konto kunden[10];
   kunden[0].kontostand = 100;
   //kunden[0].inhaber = "mueller"; -> geht so nicht 
   strcpy(kunden[0].inhaber, "mueller and some evil hex 0xFF");

   return 0; 
} 

