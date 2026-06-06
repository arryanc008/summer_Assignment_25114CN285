// write a prgrm to recursive factorial.....
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d = %d", n, factorial(n));

    return 0;
}



// write a progrm to recursive fibonacci....
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}



// write a progrm to recursive sum of digits.....
#include <stdio.h>

int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumDigits(n));

    return 0;
}



// write a prgrm to recursive reverse number......
#include <stdio.h>

int reverse = 0;

void reverseNumber(int n)
{
    if (n == 0)
        return;

    reverse = reverse * 10 + n % 10;
    reverseNumber(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    reverseNumber(n);

    printf("Reversed number = %d", reverse);

    return 0;
}