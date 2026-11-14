#include <stdio.h>

int main() {
    int a, b, somme;

    printf("Donner le premier entier : ");
    scanf("%d", &a);

    printf("Donner le deuxieme entier : ");
    scanf("%d", &b);

    somme = a + b;

    printf("La somme est : %d\n", somme);

    return 0;
}
