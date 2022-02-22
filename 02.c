

#include <stdio.h>

int main() 
{

    int peixe;
    float kilo;
    

for (;;)

    {    
    printf("Escolha as Opcoes de Peixe=> 1- Salmao, 2- Pintado, 3- Sardinha. 0-Fechar\n");
    scanf("%d", &peixe);

        if (peixe == 1)
        {
            printf("Quantos Kilos de Salmao:\n");
            scanf("%f", &kilo);
                if (kilo <= 3)
                {
                    printf("Voltando ao Menu.\n");
                }
                else
                {
                    printf("*So podemos fornecer 3 Kilos.\n");
                }
                
        }       

        if (peixe == 2)
        {
            printf("Quantos Kilos de Pintado:\n");
            scanf("%f", &kilo);
                if (kilo <= 3)
                {
                    printf("Voltando ao Menu.\n");
                }
                else
                {
                    printf("*So podemos fornecer 3 Kilos.\n");
                }
        }

        if (peixe == 3) 
        {
            printf("Quantos Kilos de Sardinho:\n");
            scanf("%f", &kilo);
               if (kilo <= 3)
                {
                    printf("Voltando ao Menu.\n");
                }
                else
                {
                    printf("*So podemos fornecer 3 Kilos.\n");
                }
        }

        if (peixe == 0)
            {
            printf("*** FIM DO PROGRAMA.***\n");
            break;
            }

    }
}