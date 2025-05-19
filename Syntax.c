#include <stdio.h>

void n_to_zero(int n);

void n_to_zero(int n){
if (n==0){
    printf("[%i],", n);
}
else{
    printf("[%i],", n);
    n_to_zero(n-1);
}
}

int main (void){
    int n;
    printf("Enter a number above than zero:\n");
        scanf("%i", &n);
        n_to_zero(n);
        return 0;
}
