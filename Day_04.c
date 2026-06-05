// write a program to print the fibonacci series....

#include<stdio.h>

int main(){
    int n, a = 0, b=1, c;
    printf("enter the no of terms\n");
    scanf("%d", &n);

    printf("Fibonacci Series -:-\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}