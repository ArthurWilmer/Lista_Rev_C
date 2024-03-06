#include <stdio.h>
#include <stdlib.h>

int main() {
    // Nome do arquivo a ser lido
    const char *nomeArquivo = "3.txt";

    // Objeto FILE para ler o arquivo
    FILE *arquivo = fopen(nomeArquivo, "r");

    // Verifique se o arquivo foi aberto corretamente
    if (!arquivo) {
        fprintf(stderr, "Erro ao abrir o arquivo %s\n", nomeArquivo);
        return 1;
    }

    // Variável para armazenar cada linha lida do arquivo
    char linha[100];  // Ajuste o tamanho conforme necessário
    int numbers[100];  // Ajuste o tamanho conforme necessário
    int count = 0;

    // Lê e imprime cada linha do arquivo
    while (fgets(linha, sizeof(linha), arquivo)) {
        if (linha[0] != '\0' && linha[0] != '\n') {
            int number = atoi(linha);
            numbers[count] = number;
            // printf("interação %d, valor %d\n", count, numbers[count]);
            count++;
        }
    }

    int i, odds_sum = 0, even_products = 1;

    for (i = 0; i < count; i++) {
        if (numbers[i] % 2 == 0)
            even_products = even_products * numbers[i];
        else if (numbers[i] % 2 == 1)
            odds_sum = odds_sum + numbers[i];
    }

    printf("O produto dos pares é %d\n\nA soma dos ímpares é %d", even_products, odds_sum);
    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
