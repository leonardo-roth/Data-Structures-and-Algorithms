#ifndef OPERACOES_ALUNOS_H
#define OPERACOES_ALUNOS_H

#include "aluno.h"

void print_all_students();
void create_new_student();
int delete_student(int id);
void print_student_by_id(int id);
void update_student_media(int id, float media);

#endif
