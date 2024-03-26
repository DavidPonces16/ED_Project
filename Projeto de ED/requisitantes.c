#include <stdio.h>
#include <stdlib.h>

//#define MAX_SIZE 100  // Definir o tamanho máximo para arrays

// Estrutura para armazenar os dados de cada tipo
typedef struct {
    int id;
    char nome[MAX_SIZE];
    int dia;
    int mes;
    int ano;
    int id_freguesia;
} Dado;

int main() {
    // Abre o ficheiro TXT
    FILE *requisitantes_file = fopen("C:\\Users\\dponces\\Documents\\GitHub\\ED_Project\\Projeto de ED\\notes\\requisitantes.txt", "r");

    // Verificando se o ficheiro foram abertos corretamente
    if (requisitantes_file == NULL || requisitantes_file == NULL || requisitantes_file == NULL || requisitantes_file == NULL) {
        perror("Erro ao abrir arquivo");
        return 1; // Retorna 1 para indicar erro
    }

    // Variáveis para armazenar os dados
    Dado requisitantes[MAX_SIZE];

    // Leitura dos dados do ficheiro e armazenamento nas variáveis
    int i = 0;
    while (fscanf(requisitantes_file, "%d %s", &requisitantes[i].id, requisitantes[i].nome) != EOF) {
        i++;
    }


    // Fecha o ficheiro
    fclose(requisitantes_file);

    // Exemplo de uso dos dados 
    printf("Concelhos:\n");
    for (int j = 0; j < i; j++) {
        printf("%d: %s\n", requisitantes[j].id, requisitantes[j].nome);
    }

    return 0;
}
