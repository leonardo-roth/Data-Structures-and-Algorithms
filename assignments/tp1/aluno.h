#ifndef ALUNO_H
#define ALUNO_H

// Definindo constantes para o nome do arquivo e tamanho do nome.
#define NOME_ARQUIVO "alunos.bin"
#define TAMANHO_NOME 100

typedef struct
{
    int id;
    char nome[TAMANHO_NOME];
    float media;
    int ativo; // Recebe 1 para ativo e 0 para falso.
} Aluno;

#endif
