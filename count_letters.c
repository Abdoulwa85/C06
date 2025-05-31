#include <stdio.h>

// Ce programme permet de compter les voyelles et les consonnes dans une chaîne.

int main() {
    char str[100];
    int i = 0, voyelles = 0, consonnes = 0;

    printf("Entrez une chaîne : ");
    scanf(" %[^\n]", str); // Lire avec les espaces

    while (str[i] != '\0') {
        char c = str[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                voyelles++; // Incrémente si c’est une voyelle
            } else {
                consonnes++; // Incrémente si c’est une consonne
            }
        }
        i++;
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
