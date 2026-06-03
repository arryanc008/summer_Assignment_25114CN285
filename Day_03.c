// write a prgrm to check whether the givem no is prime or not.....

#include<stdio.h>

int main(){
    int n ,box=0;
    printf("enter the range\n");
    scanf("%d",&n);

for (int i = 2;i<n;i++){
        if (n%i==0){
            box=1;
            break;
        }
    }

if(box==0 && n>1){
    printf("it is a prime num");
}
else
  printf("it is not a prime num");
   
    return 0;
}


// write a prgrm to print prime num in a range......

#include<stdio.h>

int main(){
     int start , end ,box;
    printf("enter the range\n");
    scanf("%d %d",&start ,&end);

for ( int i= start; i<=end;i++){
    box=0;
    if(i<2)
    continue;
    

for(int j= 2; j<=i/2; j++){
    if(i%j == 0){
        box = 1;
        break;
    }
}
 if(box==0){
    printf("%d\t",i);
 }
}

   
    return 0;
}


// write a prgrm to find gcd of two num......
#include<stdio.h>

int main(){
    int a , b , temp;

    printf("enter two num\n");
    scanf("%d %d",&a ,&b);

    while(b!=0){
        temp = b;
         b = a%b;
        a = temp;
    }

    printf("Gcd of the number is %d",a);
    return 0;
}


// write a prgrm to print lcm of two numbers...
#include<stdio.h>

int main(){
    int a , b , temp , x ,y , lcm;

    printf("enter two num\n");
    scanf("%d %d",&a ,&b);
    x=a;
    y=b;

    while(y!=0){
        temp = y;
         y = x%y;
        x = temp;
    }
    lcm= a/x*b;
    printf("lcm = %d",lcm);
   
    return 0;
}
