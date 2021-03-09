#include <stdio.h>
#include <string.h>
#include <time.h>

char nivelesPrioridades[12][40][6][20]= {{{"adios"},{"chao"},{"me","voy"},{"hora","de","irse"},{"hora","de","irme"},{"tengo","que","irme"},{"acabo","el","tiempo"},{"hasta","luego"}},
{{"murio"},{"muere"},{"paso","a","mejor","vida"},{"estiro","la","pata"},{"fallecio"},{"fallece"},{"perdio","la","vida"},{"costo","la","vida"},{"cobro","la","vida"}},
{{"mama"},{"madre"},{"papa"},{"padre"},{"hermano"},{"hermana"},{"tio"},{"tia"},{"primo"},{"prima"},{"abuelo"},{"abuela"},{"es","mi"},{"se","trata","de","mi"}},
{{"creo"},{"cree"},{"pienso"},{"piensa"},{"recuerdo"},{"recuerda"},{"digo"},{"dice"},{"hace"},{"hago"},{"igual"},{"iguales"},{"parece"},{"parecen"},{"parecidos"},{"lo","mismo"}},
{{"pueden"},{"perdon"},{"disculpa"},{"debo"},{"deberia"},{"lo","siento"},{"lamento"}, {"maldito"},{"desgraciado"}},
{{"paso"},{"ocurre"},{"ocurrio"},{"cayo"},{"lanzo"},{"avento"},{"hizo"},{"hice"},{"logro"},{"logre"},{"llego"},{"llegue"},{"soy"},{"estoy"},{"era"},{"fue"},{"perdio"},{"perdi"},{"gano"},{"gane"},{"abuso"},{"abusa"},{"exagera"},{"trauma"},{"karma"},{"dolor"},{"duele"}},
{{"me","siento"},{"siento","que"},{"estoy","sintiendo"},{"molesto"},{"molesta"},{"molestia"},{"ira"},{"colera"},{"coraje"},{"aguanto"},{"aguanta"},{"aguantar"},{"solo"},{"sola"},{"feliz"},{"felicidad"},{"alegre"},{"alegria"},{"gusta"},{"triste"},{"tristeza"},{"disgusto"},{"desagrado"},{"agrado"},{"agrada"},{"bueno"},{"buena"},{"aguantar"},{"divertido"},{"divertida"},{"nauseas"},{"asco"},{"pena"}},
{{"no"},{"contrario"},{"malo"},{"mala"},{"pesimo"},{"pesima"},{"terrible"},{"horrible"},{"aguante"},{"aguanto"},{"aguanta"},{"resisto"},{"resiste"},{"resistira"},{"chingada"}},
{{"tu"},{"usted"},{"vos"},{"eres"},{"sos"},{"sois"},{"estas"},{"el","es"},{"ella","es"},{"que","es"},{"quien"},{"como"},{"cuando"},{"donde"},{"por","que"},{"cual"},{"cuales"}},
{{"no","se"},{"como","funciona"},{"que","debo","hacer"},{"que","hacer"},{"que","hago"}},
{{"para"},{"hacia"},{"hasta"},{"desde"},{"por"},{"mediante"},{"segun"},{"mientras"}},
{{"nosotros"},{"nos"},{"ellos"},{"todos"},{"todas"},{"muchos"},{"muchas"},{"abrumador"},{"sobrecogedor"},{"lleva"},{"tan"}}};

/*char frasesRandom[4][50] = {"¿Qué tienes en la cabeza en este momento?","¿Qué
has hecho recientemente?","Cuéntame sobre tus terapeutas anteriores","¿Tienes algún
hobby?"};

char preguntas[2][20] = {"¿Cómo te llamas?","¿De dónde eres?"};

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

int main(){

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
	printf("Hablalo causa, soy tu psicologo el yOlKeR cuenta el beta bruja\n");
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
		if(psicologo(determinarPrioridad(palabras)) == 1);	
	}
}

