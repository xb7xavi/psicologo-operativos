#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "prioridades.c"

	char buffer[256];
    char *token;
    const char s[2] = " ";

int main(){
    int i = 1;
    printf("Hola soy CHAVEZ! Tu psicoterapeuta. ¿Hay algo que te este perturbando?\n");
    scanf("%[^\n]%*c", buffer);
    token = strtok(buffer, s);
    while(token != NULL){
         printf("Palabra %d: %s\n", i, token);
         token = strtok(NULL, s);
         i = i+1;
    }
    return 0;
}