#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aluno.h"


void carregar_alunos(Aluno alunos[], int *n) {
    FILE *arquivo = fopen("alunos.txt", "r");
    if (arquivo != NULL) {
        while (fscanf(arquivo, "%s %d %d", alunos[*n].nome, alunos[*n].matricula, alunos[*n].documento) == 3) {
            (*n)++;
        }
        fclose(arquivo);
    }
}

void cadastrar_aluno(Aluno alunos[], int *n) {
    printf("Informe o nome do aluno: ");
    scanf("%s", alunos[*n].nome);
    printf("Informe a matricula do aluno: ");
    scanf("%ls", alunos[*n].matricula);
    printf("Informe o documento do aluno: ");
    scanf("%ls", alunos[*n].documento);
    (*n)++;
}

void ordenar_alunos(Aluno alunos[], int n) {
    int i, j, min_idx;
    Aluno temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(alunos[j].nome, alunos[min_idx].nome) < 0) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            temp = alunos[i];
            alunos[i] = alunos[min_idx];
            alunos[min_idx] = temp;
        }
    }
}

void atualizar_arquivos(Aluno alunos[], int n) {
    int i;
    FILE *arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit (1);
    }
    ordenar_alunos(alunos, n);

    for ( i = 0; i < n; i++) {
        fprintf(arquivo, "%s %ls %ls\n", alunos[i].nome, alunos[i].matricula, alunos[i].documento);
    }
    fclose(arquivo);
}
