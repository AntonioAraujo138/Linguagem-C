#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_alunos 50

typedef struct{
    char nome[50];
    int sala;
}
Aluno;
Aluno alunos[max_alunos];

void menu();
void aluno();
void inserir();
void lista();

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
void menu(){
    int op;
    do{
    printf("Digite opcao desejada:\n 1- Cadastro de Aluno\n 2- Verificar Alunos\n 3- Inserir dados da Aulas e Sala\n 0- Fechar Programa\n");
    scanf("%d", &op);
    getchar();
    switch (op)
    {
    case 1:
        aluno();
        break;
    case 2:
        lista();
        break;
    }
    getchar();
    }while(op !=0);
}
void aluno(){
    char nome[50];
    int sala,op;
    do{
        printf("\nNome do Aulo:");
        fgets(nome,sizeof(nome),stdin);
        printf("\nSala:");
        scanf("%d",&sala);
        printf("1- Continuar \n0- Sair\n");
        scanf("%d", &op);
    }while (op !=0);
    

}
void inserir()
{

}
void lista(){
    printf("----- Lista de Alunos -----\n");
    for (int i = 0; i < max_alunos; i++)
    {
       printf("Nome: %s\n", alunos[i].nome);
       printf("Sala do Aluno: %d", alunos[i].sala);
    }
    
}
