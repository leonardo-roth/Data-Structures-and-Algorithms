#include <stdio.h>
#include <stdlib.h>

#include "arquivo_utils.h"

// Função para criar o arquivo e adicionar 5 alunos iniciais.
void create_initial_file()
{
    // passando como parâmetro o nome do arquivo e write binary (wb)
    // cria o arquivo se não existir e apaga o conteúdo se já existir
    FILE *arquivo = fopen(NOME_ARQUIVO, "wb");
    if (arquivo == NULL)
    {
        // perror imprime uma mensagem de erro caso a operação falhe
        perror("Erro ao criar o arquivo");
        // exit encerra o programa indicando erro (1)
        exit(1);
    }

    // Criando um array com 5 alunos iniciais
    Aluno alunos_iniciais[5] = {
        {1, "Ana Silva", 8.5, 1},
        {2, "Bruno Costa", 7.0, 1},
        {3, "Carlos Dias", 8.8, 1},
        {4, "Daniela Souza", 9.2, 1},
        {5, "Eduardo Lima", 6.5, 1}};

    /*
    fwrite escreve blocos de memória em um arquivo
    fwrite(ponteiro para os dados, tamanho de cada elemento, quantidade de elementos, ponteiro para o arquivo)
    */
    fwrite(alunos_iniciais, sizeof(Aluno), 5, arquivo);

    // importante fechar o arquivo depois de concluir uma operação
    fclose(arquivo);
}
