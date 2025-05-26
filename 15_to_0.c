#include <stdio.h>
void cal(int n);
void cal(int n){
    if(n==0){
        printf("[%i]",n);
    }
    else{
    
    printf("[%i],", n);
    cal(n-1);
    }
}
int main(void){
    int n;
    n=15;
    cal(n);
    return 0;
}