// write a prgrm to check perfect number.....
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            sum = sum+i;
        }
    }

    if(sum == n)
        printf("%d is a Perfect Number.", n);
    else
        printf("%d is not a Perfect Number.", n);

    return 0;
}


// write a prgrm to check strong nummber....
#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is a Strong Number", num);
    else
        printf("%d is not a Strong Number", num);

    return 0;
}


// write a prgrm to print factor of a number....
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}


// write prgrm to find largest prime factor....
#include <stdio.h>

int main() {
    int n, i, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}