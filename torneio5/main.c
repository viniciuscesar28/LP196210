#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char linha[100];

    // Lê linhas até o final da entrada (EOF)
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        // Remove o caractere de nova linha se existir
        linha[strcspn(linha, "\n")] = 0;

        int deve_ser_maiuscula = 1; // Começa com maiúscula

        for (int i = 0; linha[i] != '\0'; i++) {
            if (isalpha(linha[i])) {
                if (deve_ser_maiuscula) {
                    putchar(toupper(linha[i]));
                } else {
                    putchar(tolower(linha[i]));
                }
                // Alterna o estado apenas se for uma letra
                deve_ser_maiuscula = !deve_ser_maiuscula;
            } else {
                // Se for espaço, imprime como está e não alterna o estado
                putchar(linha[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}