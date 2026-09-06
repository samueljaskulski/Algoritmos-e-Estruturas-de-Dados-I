/*3. Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v1, v2;
    int *p1, *p2;

    printf("Digite valores:\n");
    scanf("%d %d", &v1, &v2);

    p1 = &v1;
    p2 = &v2;

    if(p1 > p2){
    printf("maior endereco e de p1: %p, conteudo: %d", *p1, *p1);
    }
    else
    printf("maior endereco e de p2: %p, conteudo: %d", *p2, *p2);
}