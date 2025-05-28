#include <stdio.h>
double cal_frac(int n){
    if (n==1){
        return 2;
    }
    else{
        return 1.0 + 1.0/ cal_frac(n-1);
    }

}
int main (void){
    int n;
    double result;
    printf("Enter a number to calculate a Fraction sum using recursion:");
        scanf("%i", &n);
        result= cal_frac(n);
        printf("Result:%.3f", result);
        return 0;

}