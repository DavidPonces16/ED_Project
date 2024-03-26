#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  // Definir o tamanho máximo para arrays

// Estrutura para armazenar os dados de cada tipo
typedef struct {
    int id;
    char nome[MAX_SIZE];
    int dia;
    int mes;
    int ano;
    int numero;
} Dado;

int main() {
    // Abre o ficheiro TXT
    FILE *requisitantes_file = fopen("requisitantes.txt", "r");

    // Verificando se os arquivos foram abertos corretamente
    if (requisitantes_file == NULL || requisitantes_file == NULL || requisitantes_file == NULL || requisitantes_file == NULL) {
        perror("Erro ao abrir arquivo");
        return 1; // Retorna 1 para indicar erro
    }

    // Variáveis para armazenar os dados
    Dado requisitantes[MAX_SIZE];

    // Leitura dos dados dos arquivos e armazenamento nas variáveis
    int i = 0;
    while (fscanf(requisitantes_file, "%d %s", &requisitantes[i].id, requisitantes[i].nome) != EOF) {
        i++;
    }


    // Fechando os arquivos
    fclose(requisitantes_file);

    // Exemplo de uso dos dados (você pode modificar conforme necessário)
    printf("Concelhos:\n");
    for (int j = 0; j < i; j++) {
        printf("%d: %s\n", requisitantes[j].id, requisitantes[j].nome);
    }

    return 0;
}
