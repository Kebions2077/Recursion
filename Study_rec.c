#include <stdio.h>
#include<stdlib.h>
int fib(int n){
    if(n==1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int fat(int n){
    if(n==1){
        return 1;
    }
    else{
        return n * fat(n-1);
    }
}
void pri(int n){
   
    if(n>15){
        return;
    }
    else{
        printf("[%i]",n);
       pri(n+1);
    }
}

int main(void){
    int op,res,n;
    printf("----Estudo Recursão----\n");
    printf("1)Fibonacci\n");
    printf("2)Fatorial\n");
    printf("3)0-15/n");
    printf("-----------------------\n");
    printf("Digite a opção:\n");
        scanf("%i",&op);
        switch(op){
            default:
                printf("Opção invalida\n");
                break;
            case 1: 
                system("cls");
                printf("--Fibonacci--\n");
                printf("Digite o numero para calcular:\n");
                scanf("%i", &n);
                res=fib(n);
                printf("Resultado:%i",res);
                break;
                       
            case 2:
                system("cls");
                printf("---Fatorial---\n");
                printf("Digite um numero para fatorar:\n");
                scanf("%i",&n);
                res=fat(n);
                printf("Resultado:%i\n",res);
                break;   
            case 3:
                system("cls");
                printf("---Impressao 0->15---\n");   
                printf("Digite um numero:\n");
                scanf("%i",&n);
                pri(n);
                break;    
            
                        }
return 0;
}