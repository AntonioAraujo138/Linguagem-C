

#include <stdio.h>


int main()
{
    for (;;)
    {
    
    float doc, valor; 



    printf("Digite o valor do Documento R$: ");
    scanf("%f",&valor);

    doc = valor*1.06;
    
    printf("O valor total do documento com imposto de 6%% e: %.1f\n",doc, valor);
    }

return;
}