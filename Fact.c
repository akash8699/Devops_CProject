#include<stdio.h>

void factorial(int num)
{
  int fact=1;

  printf("Enter the number: \n");
  scanf("%d", &num);
  int temp=num;
  while(temp > 1)
  {
    fact=fact*temp;
    temp--;
  }

  printf("The Factorial of %d is %d\n ", num, fact);
}

