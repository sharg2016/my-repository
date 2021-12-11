#include<stdio.h>
#include<conio.h>

int factorial (int );

void main()
{
int number,value;
scanf("%d",&number);
value = factorial(number);
printf("%d",value);
getch();
}


int factorial( int number)
{
  int value=1,i=1;
  for(i;i<=number;i++)
  {
     value=value*i;
  }
  return value;
}