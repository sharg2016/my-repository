#include<stdio.h>
#include<conio.h>
#include<process.h>
int sum(int a, int b);
int diff(int a, int b);
int multi(int a, int b);
int div(int a, int b);

int main()
	 {
	 int choice,c,a,b;
	 clrscr();
	 printf("       Calculator      \n");
	 printf("*********\n");
	 printf("1- Addition\n");
	 printf("2- Subtraction\n");
	 printf("3- Multiplication\n");
	 printf("4- Division\n");
	 printf("5- Exit\n");
	 printf("Enter Your Choice = ");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	 case 1:
	       scanf("%d %d",&a,&b);
	       c = sum(a,b);
	       printf("%d",c);
	       break;
	 case 2:
	       scanf("%d %d",&a,&b);
	       c = diff(a,b);
	       printf("%d",c);
	       break;
	 case 3:
	       scanf("%d %d",&a,&b);
	       c = multi(a,b);
	       printf("%d",c);
	       break;
	 case 4:
	       scanf("%d %d",&a,&b);
	       c = div(a,b);
	       printf("%d",c);
	       break;
	 case 5:
	       exit(0);
	       break;
	 }
return(0);
}

int sum(int a,int b)
{
return a+b;
}

int diff(int a, int b)
{
return a-b;
}

int multi(int a, int b)
{
return a*b;
}

int div(int a , int b)
{
return a/b;
}
