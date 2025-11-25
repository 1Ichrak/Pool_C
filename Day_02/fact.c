#include <stdio.h>

int factorial(int nb) {
    int resultat = 1;
    while (nb>1) {
        resultat = resultat*nb;
        nb--;
    }
    return resultat;
}

int main(void){
    float nb;
    printf("Entrez un nombre :\n");
    scanf("%f",&nb);

    printf("Resultat: %d\n", factorial(nb));

    return 0;
}