#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int isbn;
    char titulo[50];
    char autor[50];
    int day;
    int month;
    int year;
    //nota: criar uma variavel para levar com os valor do day, month e year para ficar em formato (dd-mm-aaaa)
} Livro;

// Função para adicionar um livro à biblioteca
Livro* adicionarLivro(int isbn, char *titulo, char *autor, int day, int month, int year);