#include<stdio.h>
void find_biggest(int a, int b , int c)
{
   
   
  int  bigest=a;
   if(bigest< b)
   {
      bigest=b;
   }
   else if(bigest<c)
   {
     bigest=c;
   }

   printf("The bigest of three numbers %d %d %d is %d\n", a, b, c, bigest);

}
