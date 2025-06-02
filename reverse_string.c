#include <stdio.h>

// Ce programme permet d’inverser une chaîne de caractères entrée par l’utilisateur.

int main() {
    char str[100];
    int i, len = 0;

    printf("Entrez une chaîne : ");
    scanf("%s", str); // Compatible Sorkho : lit un mot sans espace

    while (str[len] != '\0') {
        len++;
    }

    printf("Chaîne inversée : ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
