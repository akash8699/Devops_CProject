#include<stdio.h>
int main()
{
   int a,b,c;
   int bigest=0;
   printf("Enter the Three Numbers: \n");
   scanf("%d %d %d", &a, &b, &c);

   bigest=a;
   if(bigest< b)
   {
      bigest=b;
   }
   else if(bigest<c)
   {
     bigest=c;
   }

   printf("The bigest of three numbers %d %d %d is %d\n", a, b, c, bigest);

   return 0;
}
