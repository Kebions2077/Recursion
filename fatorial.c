#include <stdio.h>
int cal_fat(int number);
int cal_fat(int number){
    if(number==1){
        return 1;
    }
    else{
        return number * cal_fat(number-1);
    }
}
int main (void){
    int number,fatorial;
    printf("Enter a number to calculate the fatorial:\n");
        scanf("%i", & number);
        fatorial= cal_fat(number-1);
        printf("The fatorial of %i is: %i", number,fatorial);
        return 0;
}