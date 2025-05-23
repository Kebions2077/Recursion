#include <stdio.h>
void cal15(int n);
void cal15(int n){
    if (n>15){
        return;
    }
    else {
        printf("[%i],", n);
        cal15(n+1);
    }
}
int main (void){
    int n;
    n=0;
    cal15(n);
    return 0;
}