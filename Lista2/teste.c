/*
            Aula 193: Exerc�cio 2

            C�digo escrito por Wagner Gaspar
            Maior de 2021

    2) Escreva um procedimento que troca os valores dos par�metros recebidos.
    Sua assinatura deve ser: void troca(float *a, float *b);
*/
#include <stdio.h>

void troca(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    float num1 = 50, num2 = 101;

    printf("Num1: %.2f\tNum2: %.2f\n", num1, num2);
    troca(&num1, &num2);
    printf("Num1: %.2f\tNum2: %.2f\n", num1, num2);

    return 0;
}
