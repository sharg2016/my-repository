#include<stdio.h>
int main(){
    int n,i;
    int s=0,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter numbers");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(s<arr[i]){
            s=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(x<arr[i]&&arr[i]<s){
           x=arr[i];
        }
    }
    printf("%d ",x);
       return 0;
}

