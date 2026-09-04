/*2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o.*/
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
    printf("maior endereco e de p1: %p", *p1);
    }
    else
    printf("maior endereco e de p2: %p", *p2);
}