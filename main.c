#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "aluno.c"

int main() {
    Aluno alunos[MAX_ALUNOS];
    int n = 0; // número atual de alunos cadastrados
    clock_t inicio, fim;
    double tempo_execucao;
    FILE *fp;
    fp=fopen("alunos.txt","a+");

    // carrega os alunos do arquivo, se existir
    carregar_alunos(alunos, &n);

    // cadastra um novo aluno
    cadastrar_aluno(alunos, &n);

    // ordena os alunos
    inicio = clock();
    ordenar_alunos(alunos, n);
    fim = clock();
    tempo_execucao = ((double) (fim - inicio)) /CLOCKS_PER_SEC;
    
    atualizar_arquivos(alunos,n);
    
    printf("Tempo de execucao do processo de ordenacao: %.50f\n",tempo_execucao);
    return 0;
}
