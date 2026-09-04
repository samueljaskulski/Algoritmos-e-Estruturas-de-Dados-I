/*5. Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela. */
#include <stdio.h>
void maior_valor(int *pv1, int *pv2){
if(*pv2 > *pv1){
    int temp;
    temp = *pv1;
    *pv1 = *pv2;
    *pv2 = temp;
}
}
int main()
{
    int v1, v2;

    printf("Digite v1 e v2:\n");
    scanf("%d %d", &v1, &v2);

    printf("Antes da verificacao: v1 = %d, v2 = %d\n", v1, v2);
    maior_valor(&v1, &v2);
    printf("Depois da verificacao: v1 = %d, v2 = %d\n", v1, v2);
}