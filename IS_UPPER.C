#include<stdio.h>
#include<conio.h>

int is_upper(char);

void main()
{
char c,w;
clrscr();
scanf("%c",&c);
if(is_upper(c)){
	printf("It Is A Upper Case Character");
	}
else{
	printf("It Is Not A Upper Case Character");
	}
getch();
}

int is_upper(char c){
	int d,e;
	d=("%d",c);
	if(d>=65 && d<=90){
		return 1;
		}
	else{
		return 0;
		}
}
