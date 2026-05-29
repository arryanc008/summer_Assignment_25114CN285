// Write a prgrm to print the sum of first n natural nnumbers....

// #include<stdio.h>

// int main(){
//     int n , sum;
//     printf("enter the value of n\n");
//     scanf("%d",&n);
// sum = n*(n+1)/2;
// printf("the sum upto %d is %d",n,sum);
//     return 0;
// }


// write a prgrm to print the multiplcn table of a given number....

#include <stdio.h>
int main(){
    int n;
    printf("enter the num\n");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}