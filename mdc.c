#include<stdio.h>
int MDC(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return MDC(b,a%b);
    }
}
int main(void){
    int a,b,result;
    printf("Enter First number:\n");
    scanf("%i", &a);
    printf("Enter Second Number:\n");
    scanf("%i",&b);
    result=MDC(a,b);
    printf("MDC:%i",result);
    return 0;
}