#include <stdio.h>
int cal(int n){
    if(n==1){
        return 1;
    }
    else {
        return n + cal(n-1);
    }
}
int main (void){
    int n,result;
    printf("Enter A Number:\n");
        scanf("%i", &n);
        result=cal(n);
        printf("Result Of the recursion:%i", result);
        return 0;
}