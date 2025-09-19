#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operacoes_alunos.h"
#include "arquivo_utils.h"

int main()
{
    create_initial_file();
    printf("Arquivo inicial criado com sucesso.\n\n");
    print_all_students();

    int option;
    do
    {
        printf("Escolha uma opção: \n\n");
        printf("1: Criar novo estudante. \n");
        printf("2: Atualizar a média de um estudante. \n");
        printf("3: Apagar um estudante. \n");
        printf("4: Listar todos os estudantes. \n");
        printf("5: Listar um estudante. \n");
        printf("6: Sair. \n\n");
        printf("Opção: ");
        scanf("%d", &option);
        getchar();
        printf("\n");

        switch (option)
        {
        case 1:
        {
            create_new_student();
            break;
        }
        case 2:
        {
            int id;
            float media;
            printf("Escreva o id do aluno a ser atualizado: ");
            scanf("%d", &id);
            printf("Escreva a nova média do aluno: ");
            scanf("%f", &media);
            update_student_media(id, media);
            break;
        }
        case 3:
        {
            int id;
            printf("Digite o ID do estudante a ser excluído: ");
            scanf("%d", &id);
            delete_student(id);
            break;
        }
        case 4:
        {
            print_all_students();
            break;
        }
        case 5:
        {
            int id;
            printf("Digite o ID do estudante que deseja visualizar: ");
            scanf("%d", &id);
            printf("\n");
            print_student_by_id(id);
            break;
        }
        case 6:
        {
            printf("Saindo...\n");
            break;
        }
        default:
            printf("Opção inválida!\n");
        }

    } while (option != 6);

    return 0;
}
