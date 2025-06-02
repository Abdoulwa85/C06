#include <stdio.h>

// Ce programme permet de mesurer la longueur d’une chaîne sans utiliser strlen.

int main() {
    char str[100];
    int i = 0;

    printf("Entrez une chaîne : ");
    scanf("%s", str); // Lit un mot sans espace

    while (str[i] != '\0') {
        i++;
    }

    printf("Longueur de la chaîne : %d\n", i);

    return 0;
}
