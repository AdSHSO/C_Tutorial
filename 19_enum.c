#include <stdio.h>

int main(void)
{
   enum alphabet {a=10,b=20,c=30,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
   enum alphabet singlechar = b;

   printf("%d\n", singlechar);

   for (int i=a; i<=z; i++)       
      printf("%d ", i); 
        
   return 0; 
} 
