                                                            is_armstrong()  Function


#include<stdio.h>
#include<conio.h>
int count(int);
int pow(int ,int);
long int is_armstrong(int);

void main()
{
int number,c,d;
clrscr();
scanf("%d",&number);
 if(is_armstrong(number)){
    printf("Given number is a ARMSTRONG");
    }
 else{
    printf("Given number is NOT a ARMSTRONG");
    }
getch();
}
int count (int number){
    int i=0;
    while(number>0){
number=number/10;
        i=i+1;
    }
    return i;
}
int pow (int base , int exponent){
    int i,value=1;
    for(i=1;i<=exponent;i++){
        value=base*value;
    }
    return  value;
}
    long int is_armstrong(int number){
int remainder,sum=0,copy=number,exponent;
exponent=count(number);
while(number>0){
        remainder = number%10;
        sum= sum + pow(remainder,exponent);
        number = number /10;
    }
    if(sum==copy){
        return 1;
        }
    else{
	  return 0;
	}
