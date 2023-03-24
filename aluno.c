

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aluno.h"


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
    for ( i = 0; i < n; i++) {
        fprintf(arquivo, "%s %d %d\n", alunos[i].nome, alunos[i].matricula, alunos[i].documento);
    }
    fclose(arquivo);
}
 */ 