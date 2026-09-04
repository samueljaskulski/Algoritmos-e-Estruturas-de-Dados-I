/*. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptri;
    int inteiro = 67;
    char *ptrc;
    char caractere = 's';
    float *ptrr;
    float real = 23.2;

    ptri = &inteiro;
    ptrc = &caractere;
    ptrr = &real;

    printf("Inteiro: %d, Char: %c, Float: %.2f", inteiro, caractere, real);

    *ptri = 69;
    *ptrc = 'n';
    *ptrr = 211.2;

    printf("Inteiro: %d, Char: %c, Float: %.2f", inteiro, caractere, real);

}