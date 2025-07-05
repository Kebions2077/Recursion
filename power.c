#include <stdio.h>
int powe(int num,int exp){
    if(exp==0){
        return 1;
    }
    else{
        
        return num *  powe(num,exp-1);
    }
}
int main(void){
    int num,exp,result; 
    printf("Enter a number to power:\n");
    scanf("%i", & num);
    printf("Enter a Expoent:\n");
    scanf("%i", &exp);
    result= powe(num,exp);
    printf("result:%i", result);
    return 0;
    
}