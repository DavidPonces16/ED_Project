#include <stdio.h>
#include <stdlib.h>

//#define MAX_SIZE 100  // Definir o tamanho máximo para arrays

// Estrutura para armazenar os dados de cada tipo
typedef struct {
    int id;
    char nome[MAX_SIZE];
} Dado;

int main() {
    // Abrindo o ficheiro TXT
    FILE *freguesia_file = fopen("C:\\Users\\dponces\\Documents\\GitHub\\ED_Project\\Projeto de ED\\notes\\freguesia.txt", "r");

    // Verificando se o ficheiro foi aberto corretamente
    if (freguesia_file == NULL || freguesia_file == NULL || freguesia_file == NULL || freguesia_file == NULL) {
        perror("Erro ao abrir arquivo");
        return 1; // Retorna 1 para indicar erro
    }

    // Variáveis para armazenar os dados
    Dado freguesias[MAX_SIZE];

    // Leitura dos dados do ficheiro e armazenamento nas variáveis
    int i = 0;
    while (fscanf(freguesia_file, "%d %s", &freguesias[i].id, freguesias[i].nome) != EOF) {
        i++;
    }

    // Fecha o ficheiro
    fclose(freguesia_file);

    // Exemplo de uso dos dados 
    printf("Concelhos:\n");
    for (int j = 0; j < i; j++) {
        printf("%d: %s\n", freguesias[j].id, freguesias[j].nome);
    }

    return 0;
}
