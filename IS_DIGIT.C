#include<stdio.h>
#include<conio.h>

int is_digit( int );

void main()
{
int digit;
scanf("%d",&digit);
if(is_digit(digit))
{
  printf("This Is A Digit\n");
}
else
{
  printf("This is Not a Digit\n");
}

getch();
}

int is_digit( int digit)
{
if(digit>=0 && digit<=9)
{
 return 1;
}
else
{
 return 0;
}
}

