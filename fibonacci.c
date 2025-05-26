#include<stdio.h>
int fibo(int n);
int fibo(int n){
    if(n==1 || n==2){
       return 1;
    }
    else {
        return fibo(n-1) + fibo (n-2);
    }
}
int main (void){
    int n, fibonacci;
    printf("Enter the position to discover the fibonacci number:\n");
        scanf("%i", &n);
        fibonacci=fibo(n);
        printf("The %ith number of the sequence is:%i",n, fibonacci);
        return 0;
}