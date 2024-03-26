#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  // Definir o tamanho máximo para arrays

// Estrutura para armazenar os dados de cada tipo
typedef struct {
    int id;
    char nome[MAX_SIZE];
} Dado;

int main() {
    // Abre os arquivos tipo txt
    FILE *concelhos_file = fopen("concelhos.txt", "r");

    // Verificando se os arquivos foram abertos corretamente
    if (concelhos_file == NULL || concelhos_file == NULL || concelhos_file == NULL || concelhos_file == NULL) {
        perror("Erro ao abrir arquivo");
        return 1; // Retorna 1 para indicar erro
    }

    // Variáveis para armazenar os dados
    Dado concelhos[MAX_SIZE];

    // Leitura dos dados dos arquivos e armazenamento nas variáveis
    int i = 0;
    while (fscanf(concelhos_file, "%d %s", &concelhos[i].id, concelhos[i].nome) != EOF) {
        i++;
    }

    // Faça o mesmo para os outros arquivos...

    // Fechando os arquivos
    fclose(concelhos_file);

    // Exemplo de uso dos dados (você pode modificar conforme necessário)
    printf("Concelhos:\n");
    for (int j = 0; j < i; j++) {
        printf("%d: %s\n", concelhos[j].id, concelhos[j].nome);
    }

    return 0;
}
