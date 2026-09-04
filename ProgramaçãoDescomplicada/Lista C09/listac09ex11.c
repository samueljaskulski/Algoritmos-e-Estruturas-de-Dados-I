/*11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares.*/
#include <stdio.h>
int main()
{
    int a[5];
    int *ptr = a;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor de a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        if((*ptr)%2==0){
            printf("\na[%d]=%d",i,a[i]);
        }
        (ptr)++;
    }
    
}