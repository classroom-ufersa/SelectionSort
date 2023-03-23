#define MAX_ALUNOS 100 // número máximo de alunos que podem ser cadastrados

struct aluno{
    char nome[50];
    int matricula[20];
    int documento[20];
};

typedef struct aluno Aluno;

void carregar_alunos(Aluno alunos[], int *n);
void cadastrar_aluno(Aluno alunos[], int *n);
void ordenar_alunos(Aluno alunos[],int n);
void atualizar_arquivos(Aluno alunos[],int n);