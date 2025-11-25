#include <stdio.h>

void calc(void) {
    char o;
    float a, b, resultat;

    printf("Entrez le premier nombre :\n");
    scanf("%f",&a);

    printf("Entrez le deuxieme nombre :\n");
    scanf("%f",&b);

    printf("Entrez un operateur :\n");

    scanf(" %c",&o);

    switch (o)
    {
    case '+':
        resultat=a+b;
        printf("Resulat : %.2f\n", resultat);
        break;
    case '-':
        resultat=a-b;
        printf("Resulat : %.2f\n", resultat);
        break;
    case '*':
        resultat=a*b;
        printf("Resulat : %.2f\n", resultat);
        break;
    case '/':
        if(b==0){
            printf("Erreur, division sur 0\n");
            break;
        }
        resultat=a/b;
        printf("Resulat : %.2f\n", resultat);
        break;
    default:
        break;
    }
}

int main(void){
    calc();
    return 0;
}