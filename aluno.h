#define MAX_ALUNOS 5 // número máximo de alunos que podem ser cadastrados

struct aluno{
    char nome[50];
    int matricula[20];
    int documento[20];
};

typedef struct aluno Aluno;
