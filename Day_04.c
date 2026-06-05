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


// write a prgrm to find nth fibonacci term.....
 
#include<stdio.h>

int main(){
    int n, a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n==0)
        printf("%d", a);
    else if (n==1)
        printf("%d", b);
    else {
        for (int i=2; i<=n; i++) {
            c = a+b;
            a = b;
            b = c;
        }
        printf("%d", b);
    }
    return 0;
}


// write a prgrm to check for armstrong number.....

#include<stdio.h>

int main(){
    int num, original, digit, sum = 0;

    printf("enter a num ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
        printf("It is an Armstrong Number");
    else
        printf("It is not an Armstrong Number");
    return 0;
}


// write a program to print armstrong num in a range......

#include<stdio.h>

int main(){
    int start, end, num, temp, rem, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for(num = start; num <= end; num++) {
        temp = num;
   sum = 0;

  while(temp > 0) {
         rem = temp % 10;
         sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == num) {
            printf("%d ", num);
        }
    }
    return 0;
}