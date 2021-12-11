#include<stdio.h>
#include<conio.h>

int pow(int , int );

void main()
{
int base,exponent,value;
scanf("%d %d",&base,&exponent);
value = pow(base,exponent);
printf("%d",value);

getch();
}

int pow(int base ,int exponent)
{
 int value=1,i=1;
 for(i;i<=exponent;i++)
 {
	value=base*value;
 }
 return value;
}
