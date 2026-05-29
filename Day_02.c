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

// write a prgrm to reverse a num......

#include<stdio.h>

int main(){
    int n , reverse = 0, digit;
    printf("enter the num\n");
    scanf("%d",&n);

    while(n!=0){
        digit=n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }

    printf("reverse of the num is %d",reverse);
    return 0;
}

//  write a prgrm to find product of digits....

#include<stdio.h>

int main(){
    int n, product =1 , digit;
    printf("enter the num\n");
    scanf("%d",&n);

    while(n>0){
        digit = n%10;
        product= product * digit;
        n = n/10;
    }
    printf("the sum of digits entered is %d",product);
    return 0;
}

//  write a prgrm to check whether no is a palindrome.....

#include<stdio.h>

int main(){
      int n , original,reverse = 0, digit;
    printf("enter the num\n");
    scanf("%d",&n);
    original=n;

    while(n!=0){
        digit=n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }
 if(original == reverse){
    printf("the num is palindrome");
 }
 else 
     printf("the num is not palindrome");

    return 0;
}
