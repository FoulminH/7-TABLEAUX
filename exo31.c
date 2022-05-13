#include <stdio.h>
#include <stdlib.h>

int recherche(int valeur, int tableau[], int taille){
    int i=0;
    while(i < taille && valeur!=tableau[i]){
        i++;
    }return i;
};

int rechercheDicho(int valeur,int tableau[], int taille){
    int start = 0;
    int end = taille;
    int i;
    while(start<end){
        i = (start+end)/2;
        if (valeur < tableau[i]){
            end = i;
        }else if(valeur > tableau[i]){
            start = i + 1;
        }else{
            return i;
        }
    }
};

int main()
{
    int valeur = 2;
    int tableau[] = {1,2,3,4,5,6};
    int taille = sizeof tableau / sizeof tableau[0];
    printf("La valeur cherchée se trouve à l'indice %d du tableau",recherche(valeur,tableau,taille));
    printf("A l'aide de la recherche dichotomique : la valeur cherchée se trouve à l'indice %d du tableau",rechercheDicho(valeur,tableau,taille));

    return 0;
}
