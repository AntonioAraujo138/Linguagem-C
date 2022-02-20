
#include <stdio.h>


int main()
{
    int ano, idade;
    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &ano);

    idade = 2022 - ano;

    if(idade > 18)
    {
        printf("Voce e maior de idade!");
    }
    else
    {
        printf("Voce NAO e maior de idade!");
    }
}