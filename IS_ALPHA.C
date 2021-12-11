#include<stdio.h>
#include<conio.h>

int is_alphabet(char);

void main()
{
int alphabet;
scanf("%c",&alphabet);
if(is_alphabet(alphabet))
{
  printf("This Is A alphabet\n");
}
else
{
  printf("This is Not A alphabet\n");
}

getch();
}

int is_alphabet( char alphabet)
{
if((alphabet>='A' && alphabet<='Z') || (alphabet>='a'&& alphabet<='z'))
{
 return 1;
}
else
{
 return 0;
}
}

