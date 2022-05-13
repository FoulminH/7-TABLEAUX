#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int esgi_strlen(const char texte[]){
    int i=0;
    while(texte[i] != '\0'){
        i++;
    }
    return i;
};
void esgi_strcpy(char destination[], const char source[]){
    int i=0;
    while(source[i] != '\0'){
        destination[i++]=source[i];
    };
    destination[i]=0;
};
void esgi_strcat(char destination[], const char source[]){
    int i=0;
    int j=0;
    while(destination[i] != '\0'){
        i++;
    }
    while(source[j] != '\0'){
        destination[i++]=source[j++];   
    }
    destination[i]=0;
};
int esgi_strcmp(const char first[], const char second[]){
    
};
int main() {
char texte[] = "Welcome to ESGI !";
char hello[] = "Hello";
char copie[50];
printf("esgi_strlen(\"%s\") = %d\n", texte,esgi_strlen(texte));
//printf("strlen(\"%s\") = %lu\n", texte,strlen(texte));
esgi_strcpy(copie, "Eleve, ");
printf("copie = \"%s\"\n", copie);
esgi_strcat(copie, texte);
printf("copie = \"%s\"\n", copie);
/*printf("esgi_strcmp(\"Hello\", \"Hello\") = %d = 0\n", esgi_strcmp(hello, "Hello"));
printf("esgi_strcmp(\"Hello\", \"Bonjour\") = %d >0\n", esgi_strcmp(hello, "Bonjour"));
printf("esgi_strcmp(\"Hello\", \"Hell\") = %d > 0\n",esgi_strcmp(hello, "Hell"));
printf("esgi_strcmp(\"Bonjour\", \"Hello\") = %d <0\n",esgi_strcmp("Bonjour", hello));*/
exit(EXIT_SUCCESS);
}
