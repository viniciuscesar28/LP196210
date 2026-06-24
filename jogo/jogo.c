#include <stdio.h>
#include <stdbool.h>

// Verifica se um valor é válido em uma posição específica
bool eh_valido(int matriz[9][9], int linha, int col, int valor) {
    // Verifica linha
    for (int j = 0; j < 9; j++) {
        if (matriz[linha][j] == valor) {
            return false;
        }
    }
    
    // Verifica coluna
    for (int i = 0; i < 9; i++) {
        if (matriz[i][col] == valor) {
            return false;
        }
    }
    
    // Verifica submatriz 3x3
    int reg_i = (linha / 3) * 3;
    int reg_j = (col / 3) * 3;
    
    for (int i = reg_i; i < reg_i + 3; i++) {
        for (int j = reg_j; j < reg_j + 3; j++) {
            if (matriz[i][j] == valor) {
                return false;
            }
        }
    }
    
    return true;
}

// Imprime o tabuleiro formatado
void imprimir_tabuleiro(int matriz[9][9]) {
    printf("\n");
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0 && i != 0) {
            printf("------+-------+------\n");
        }
        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0 && j != 0) {
                printf("| ");
            }
            if (matriz[i][j] == 0) {
                printf("_ ");
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matriz[9][9];
    int total_zeros = 0;
    int zeros_preenchidos = 0;
    FILE *arquivo;
    
    // Abre o arquivo input2.txt para leitura
    arquivo = fopen("input2.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro: Nao foi possivel abrir o arquivo input2.txt\n");
        printf("Certifique-se de que o arquivo existe no mesmo diretorio do programa.\n");
        return 1;
    }
    
    printf("=== SUDOKU ===\n");
    printf("Lendo tabuleiro do arquivo input2.txt...\n\n");
    
    // Lê os 81 números do arquivo
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (fscanf(arquivo, "%d", &matriz[i][j]) != 1) {
                printf("Erro: Formato invalido no arquivo.\n");
                fclose(arquivo);
                return 1;
            }
            if (matriz[i][j] == 0) {
                total_zeros++;
            }
        }
    }
    
    fclose(arquivo);
    
    printf("Tabuleiro inicial:");
    imprimir_tabuleiro(matriz);
    printf("Total de posicoes vazias: %d\n\n", total_zeros);
    
    // Percorre a matriz procurando zeros
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (matriz[i][j] == 0) {
                int valor;
                
                // Pede o valor até que seja válido
                do {
                    printf("Linha %d, Coluna %d esta vazia. Digite o numero (1-9): ", i+1, j+1);
                    scanf("%d", &valor);
                    
                    if (valor < 1 || valor > 9) {
                        printf("ERRO: Digite um numero entre 1 e 9!\n\n");
                    } else if (!eh_valido(matriz, i, j, valor)) {
                        printf("ERRO: O numero %d ja existe na linha %d, coluna %d ou submatriz 3x3!\n\n", valor, i+1, j+1);
                    }
                } while (valor < 1 || valor > 9 || !eh_valido(matriz, i, j, valor));
                
                // Coloca o valor na matriz
                matriz[i][j] = valor;
                zeros_preenchidos++;
                
                printf("Correto! (%d/%d preenchidos)\n", zeros_preenchidos, total_zeros);
                imprimir_tabuleiro(matriz);
            }
        }
    }
    
    printf("\n=== PARABENS! VOCE COMPLETOU O SUDOKU! ===\n");
    imprimir_tabuleiro(matriz);
    
    return 0;
}
