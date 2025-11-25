#include <stdio.h>
#include <math.h>

int sqrt_x(int nb) {
    if(nb<0){
        printf("Erreur");
        return 1;
    }
    return (int)sqrt(nb);
}

int main(void){
    int nb;
    printf("Entrez un nombre: \n");
    scanf("%d",&nb);

    printf("Resultat: %d\n",sqrt_x(nb));
    return 0;
}