

#include <stdio.h>

int main() 
{
  int peixe;
  float kilo;

    
    printf("Opcoes de Peixe=> 1- Salmao, 2- Pintado ou 3- Sardinha:\n");
    scanf("%d", &peixe);

        if (peixe == 1)
        {
            printf("Quantos Kilos de Salmao:\n");
            scanf("%f", &kilo);
                if (kilo > 3.0)
                {
                    printf("So podemos oferecer 3 Kilo.\n");
                
                }
        }       

        if (peixe == 2)
        {
            printf("Quantos Kilos de Pintado:\n");
            scanf("%f", &kilo);
                if (kilo > 3.0)
                {
                    printf("So podemos oferecer 3 Kilo.\n");
                }
        }

        if (peixe == 3)
        {
            printf("Quantos Kilos de Sardinho:\n");
            scanf("%f", &kilo);
                if (kilo > 3.0)
                {
                    printf("So podemos oferecer 3 Kilo.\n");
                }
        }
        
        else
        {
            printf("Opcao Invalida!\n");
         
        }
       

}