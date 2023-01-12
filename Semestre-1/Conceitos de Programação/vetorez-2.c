#include <stdio.h>

int main(void)
{
    int idade[3] = {0, 0, 0};
    float media = 0.0;
    printf("\n Informe a idade do primeiro usuario: ");
    scanf("%d", &idade[0]);
    printf("\n Informe a idade do segundo usuario: ");
    scanf("%d", &idade[1]);
    printf("\n Informe a idade do terceiro usuario: ");
    scanf("%d", &idade[2]);
    media = (idade[0] + idade[1] + idade[2]) / 3;
    printf("\n A media de idade entre os usuarios e de: = %.2f", media);
    return 0;
}