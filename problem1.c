#include<stdio.h>

int main(){
    int n , sum;
    printf("enter the value of n\n");
    scanf("%d",&n);
sum = n*(n+1)/2;
printf("the sum upto %d is %d",n,sum);
    return 0;
}