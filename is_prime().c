                                                       is_prime() function
#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int b);  
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(prime(a)){         
    printf("Given Number is a PRIME Number");
    }
else{
   printf("Given Number is NOT a PRIME Number");
   }
getch();
}
int prime(int b){          
    int i;
    for(i=2;i<=(b/2);i++){     
        if(b%i==0){      
           return 0;   
            }
        }
       if(i>(b/2))
{         
              return 1;  
       }
}
