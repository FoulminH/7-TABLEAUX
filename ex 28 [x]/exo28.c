#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

int i;

/* min_value renvoie le plus petit élément de values */
int min_value(int values[], int taille){
     
    int min = values[0];
    int i;
     for (i = 0; i<TAILLE; i++)
    {   
        if(values[i]< min){
            min = values[i];    
        }
    }return min;
};
/* min_index renvoie l'indice du plus petit élément de values
,→ */
int min_index(int values[], int taille){
     int min_index = 0;
     //int i;
     for (i = 0; i<TAILLE; i++)
    {   
        if(values[min_index] > values[i]){
            min_index = i;    
        }
    }return min_index;
};

int max_index(int values[], int taille){
    int max_index = 0;
     //int i;
     for (i = 0; i<TAILLE; i++)
    {   
        if(values[max_index] < values[i]){
            max_index = i;    
        }
    }return max_index;

}
/* max_value renvoie le plus grand élément de values */
int max_value(int values[], int taille){
    int max = values[0];
    int i;
     for (i = 0; i<TAILLE; i++)
    {   
        if(values[i]> max){
            max = values[i];    
        }
    }return max;

};
/* moyenne renvoie la moyenne des éléments de values */
float moyenne(int values[], int taille){
    int i,moyenne;
    int total = 0;
     for (i = 0; i<TAILLE; i++)
    {   total += values[i];
        
    }return total/(float)TAILLE;
};


int main() {
int values[TAILLE] = {5, 9, 1, 4, 8, 3, 0, 6, 2, 7};
printf("minimum : values[%d] = %d\n", min_index(values,TAILLE), min_value(values, TAILLE));
printf("maximum : values[%d] = %d\n", max_index(values,TAILLE), max_value(values, TAILLE));
printf("moyenne : %g\n", moyenne(values, TAILLE));
exit(EXIT_SUCCESS);


}