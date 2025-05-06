#include<stdio.h>
void  check_palindrome(int num)
{
  int original=num, reversed=0, rem;


  while(num!=0)
  {
   rem=num%10;
   reversed=reversed*10 +rem;
   num/=10;
  }
  if(original == reversed)
  {
	  printf("%d is  a palindrome.\n",original);
  }
  else
  {
	  printf("%d is not a palindrome.\n",original);
  }
}

