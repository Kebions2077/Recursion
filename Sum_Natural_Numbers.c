#include<stdio.h>
int sum_natural(int n){
    if (n==100){
        return 100;
    }
    else{
        return n + sum_natural(n+1);
    }
}
int main(void){
    int n,sum;
    printf("Enter a number to do a Recursive Sum:\n");
    scanf("%i", &n);
    sum=sum_natural(n);
    printf("Result of the sum:%i",sum);
    return 0;
}