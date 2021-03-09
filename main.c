#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "arreglos.h"



int main(){
    printf("Hola, soy ELIZA, tu psicoterapeuta. ¿Hay algo que te esté perturbando?\n");
    while(0 == 0){
        char buffer[256];
        char palabras[30][15];
        char *token;
        const char s[2] = " ";
        int i = 0;
        scanf("%[^\n]%*c", buffer);
        token = strtok(buffer, s);
        while(token != NULL){
            strcpy(palabras[i],token);
            token = strtok(NULL, s);
            i = i+1;
        }
        if(psicologo(determinarPrioridad(palabras)) == 1){return 0;}
    }
}

/*char buffer[256};
    char *token;
    const char s[2} = " ";
    int i = 1;
    printf("Hola soy CHAVEZ! Tu psicoterapeuta. ¿Hay algo que te este perturbando?\n");
    scanf("%[^\n}%*c", buffer);
    token = strtok(buffer, s);
    while(token != NULL){
        printf("Palabra %d: %s\n", i, token);
        token = strtok(NULL, s);
        i = i+1;
    }
    return 0; */
    /*printf("po\n");
    while ((getchar()) != '\n');*/