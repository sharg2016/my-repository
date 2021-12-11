                                                          



#include<stdio.h>
#include<conio.h>
int is_lower(char);
void main()
{
char c;
clrscr();
scanf("%c",&c);
if(is_lower(c)){
	printf("It Is A Lower Case Character");
	}
else{
	printf("It Is Not A Lower Case Character");
	}
getch();
}

int is_lower(char c){
	int d,e;
	d=("%d",c);
	if(d>=97 && d<=122){
		return 1;
		}
	else{
		return 0;
		}
}
