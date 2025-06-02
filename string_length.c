#include <stdio.h>
// ce programme permet de calculer la longueur du chaine sans utiliser strlen
int main() {
    char str[100];
    int count = 0;

    scanf(" %[^\n]", str);

    while (str[count] != '\0') {
        count++;
    }

    printf("Longueur de la chaîne : %d\n", count);
    return 0;
}
