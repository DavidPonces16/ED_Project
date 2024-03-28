#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  // Definir o tamanho máximo para arrays

// Estrutura para armazenar os dados de cada tipo
typedef struct {
    int id;
    char nome[MAX_SIZE];
} Dado;

int main() {
    // Abrindo os arquivos TXT
    FILE *distritos_file = fopen("distritos.txt", "r");

<<<<<<< Updated upstream
    // Verificando se os arquivos foram abertos corretamente
    if (distritos_file == NULL || distritos_file == NULL || distritos_file == NULL || distritos_file == NULL) {
        perror("Erro ao abrir arquivo");
=======
    // Verificando se o ficheiro foi aberto corretamente
    if (distritos_file == NULL) {
        printf("Erro ao abrir arquivo");
>>>>>>> Stashed changes
        return 1; // Retorna 1 para indicar erro
    }

    // Variáveis para armazenar os dados
    Dado distritos[MAX_SIZE];

    // Leitura dos dados dos ficheiros e armazenamento nas variáveis
    int i = 0;
    while (fscanf(distritos_file, "%d %s", &distritos[i].id, distritos[i].nome) != EOF) {
        i++;
    }


    // Fechando os arquivos
    fclose(distritos_file);

    // Exemplo de uso dos dados (você pode modificar conforme necessário)
    printf("Concelhos:\n");
    for (int j = 0; j < i; j++) {
        printf("%d: %s\n", distritos[j].id, distritos[j].nome);
    }

    return 0;
}
