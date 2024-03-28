#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  // Definir o tamanho máximo para arrays

typedef struct{
    int isbn;
    char titulo[50];
    char nome_editora[50];
    int day;
    int month;
    int year;
    //nota: necessário criar uma variavel para levar o dia, mes e ano e ficar tudo junto (dd-mm-aaaa)
} Dado;

// Função para adicionar um livro à biblioteca
Dado* adicionarLivro(int isbn, char *nome_livro, char *editora, int day, int month, int year);