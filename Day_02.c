// write a prgrm to find the sum of digits of a num....

#include<stdio.h>

int main(){
    int n, sum =0 , digit;
    printf("enter the num\n");
    scanf("%d",&n);

    while(n>0){
        digit = n%10;
        sum= sum + digit;
        n = n/10;
    }
    printf("the sum of digits entered is %d",sum);
    return 0;
}