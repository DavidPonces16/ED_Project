#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  // Definir o tamanho máximo para arrays

// Estrutura para armazenar os dados de cada tipo
typedef struct {
    int id;
    char nome[MAX_SIZE];
} Dado;

int main() {
    // Abre o ficheiro tipo txt
    FILE *concelhos_file = fopen("C:\\Users\\dponces\\Documents\\GitHub\\ED_Project\\Projeto de ED\\notes\\concelhos.txt", "r");

    // Verificando se o ficheiro foi aberto corretamente
    if (concelhos_file == NULL || concelhos_file == NULL || concelhos_file == NULL || concelhos_file == NULL) {
        perror("Erro ao abrir arquivo");
        return 1; // Retorna 1 para indicar erro
    }

    // Variáveis para armazenar os dados
    Dado concelhos[MAX_SIZE];

    // Leitura dos dados do ficheiro e armazenamento nas variáveis
    int i = 0;
    while (fscanf(concelhos_file, "%d %s", &concelhos[i].id, concelhos[i].nome) != EOF) {
        i++;
    }

    // Fecha o ficheiro
    fclose(concelhos_file);

    // Exemplo de uso dos dados 
    printf("Concelhos:\n");
    for (int j = 0; j < i; j++) {
        printf("%d: %s\n", concelhos[j].id, concelhos[j].nome);
    }

    return 0;
}
