// write a progrm to convert decimal to binary.....
#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary equivalent: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}


// write a program to convert binary to decimal.....
#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, rem, i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal equivalent = %d", decimal);

    return 0;
}


// write a prgrm to count set bits in a number.....
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        if (n % 2 == 1)
            count++;

        n = n / 2;
    }

    printf("Number of set bits = %d", count);

    return 0;
}


// write a progrm to find x^n without pow().......
#include <stdio.h>

int main() {
    int x, n, i;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    for(i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("%d^%d = %lld", x, n, result);

    return 0;
}