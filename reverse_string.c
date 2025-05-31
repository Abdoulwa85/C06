#include <stdio.h>

// Ce programme permet d’inverser une chaîne de caractères entrée par l’utilisateur.

int main() {
    char str[100];
    int i, len = 0;

    printf("Entrez une chaîne : ");
    scanf("%[^\n]", str); // Lire toute la ligne, y compris les espaces

    while (str[len] != '\0') {
        len++; // Calcul de la longueur de la chaîne
    }

    printf("Chaîne inversée : ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]); // Affichage des caractères en sens inverse
    }
    printf("\n");

    return 0;
}
