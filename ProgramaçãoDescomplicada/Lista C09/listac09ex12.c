/*13. Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings*/
void verifica(char *pp1, char *pp2){
    int encontrou = 0;
for (; *pp1 != '\0'; pp1++)
{
    if (*pp1 == *pp2)
    {
        char *p1 = pp1;
        char *p2 = pp2;
       while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
       {
        p1++;
        p2++;
       }
       if (*p2 == '\0') {
                encontrou = 1;
                break;
            }
        }
    }
    if (encontrou) {
        printf("A segunda string ocorre dentro da primeira!\n");
    } else {
        printf("A segunda string NAO ocorre dentro da primeira.\n");
    }
}
#include <stdio.h>
int main()
{
    char palavra1[50], palavra2[50];

    printf("Digite string 1:\n");
    fgets(palavra1, 50, stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';
    printf("Digite string 2:\n");
    fgets(palavra2, 50, stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';

    verifica(palavra1, palavra2);
    return 0;
}