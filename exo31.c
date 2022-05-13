#include <stdio.h>
#include <stdlib.h>

int recherche(int valeur, int tableau[], int taille){
    int i=0;
    while(i < taille && valeur!=tableau[i]){
        i++;
    }return i;
};

int main()
{
    int valeur = 2;
    int tableau[] = {1,2,3,4,5,6};
    int taille = sizeof tableau / sizeof tableau[0];
    printf("La valeur cherchée se trouve à l'indice %d du tableau",recherche(valeur,tableau,taille));

    return 0;
}
