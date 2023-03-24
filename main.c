#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define MAX_ALUNOS 5

/* #include "aluno.c"
 */
int main() { 
    int opc, alun, matricula, documento; 
    char nome[100];
    printf("\nEscolha:\n");
    printf("1. Adicionar aluno: \n");
    printf("2. Exibir alunos: \n");
    printf("Opção escolhida: ");
    scanf("%d",&opc);
    switch (opc){
    case 1:
        if (alun<MAX_ALUNOS){            
            printf("Informe o nome: ");
            scanf("%s",nome);
            printf("Informe a matricula: ");
            scanf("%d",&matricula);
            printf("Informe o documento: ");
            scanf("%d",&documento);        
        } else
        {
            printf("Não foi possivel, Lotado!");
        }
        break;
    case 2: 
        printf("Exibir aluno: ");
        break;
    default:
        printf("Opção inexistente!");
        break;
    }
   
    return 0;
}
