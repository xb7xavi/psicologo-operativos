

/*

void gemRandom(){
    srand(time(NULL));
    printf("%s\n", frasesRandom[rand() % 3]);
}

void preguntar(){
    if(persona.nombre == empty)
        printf("%s\n", preguntas[0]);
    if(persona.lugar == empty)
        printf("%s\n", preguntas[1]);
}*/

int determinarPrioridad(char arreglo[20][15]){
    int contador = 0;
    int prioridad;
    int frase = 0;
    int freno = 12;
    /*Recorre el arreglo de lo introducido por consola*/
    while(strcmp(arreglo[contador], "\0")!= 0 ){
        /*Recorre los niveles de prioridades*/
        /*printf("pi\n");*/
        for(prioridad = 0; prioridad < freno; prioridad++){
            /*Recorre las frases dentro de los niveles de prioridades*/
            /*printf("pu\n");*/
            while(strcmp(nivelesPrioridades[prioridad][frase][0], "\0")!= 0){
                /*Recorre la cantidad de palabras de una frase*/
                /*printf("pa\n");*/
                if(strcmp(nivelesPrioridades[prioridad][frase][0], arreglo[contador]) == 0){
                    /*printf("pe\n");*/
                    printf("bingo, palabra: %s, la prioridad es %d\n",nivelesPrioridades[prioridad][frase][0], prioridad +1);
                    freno = prioridad;
                    break;
                }
                frase = frase +1;
            }
            frase = 0;
        }
        contador = contador +1;
        prioridad = 0;
    }
    return freno +1;
};

int psicologo(int a){
    switch(a){
        case 1: printf("Fue todo un placer hablar contigo, aquí estaré para ti\n"); break;
        case 2: printf("De verdad lo siento mucho...\n"); break;
        case 3: printf("Cuentame más sobre tu $VARIABLE\n"); break;
        case 4: printf("Cuentame un poco más, suena muy interesante\n"); break;
        case 5: printf("No hay problema, estás en un espacio seguro, prosigue\n"); break;
        case 6: printf("¿Cómo te sientes con respecto a eso?\n"); break;
        case 7: printf("¿Por qué te sientes así?\n"); break;
        case 8: printf("No te preocupes, todo va a estar bien\n"); break;
        case 9: printf("Mejor no nos desviemos, estamos aquí para hablar sobre ti\n"); break;
        case 10: printf("Sientete en confianza y cuentame lo que quieras\n"); break;
        case 11: printf("Cuentame un poco más, suena muy interesante\n"); break;
        case 12: printf("Especifíca un poco más por favor\n"); break;
        default: /*if(infoRecopilada){gemRandom()}else{preguntar()*/break;
    }
    return a;
};