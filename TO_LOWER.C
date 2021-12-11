
#include<stdio.h>
#include<conio.h>

char to_lower(char);

void main()
{
char c,w;
clrscr();
scanf("%c",&c);
w=to_lower(c);
printf("%c",w);
getch();
}

char to_lower (char c){
	int d,e;
	d=("%d",c);
	d=d+32;
	e=("%c",d);
	return e;
}


