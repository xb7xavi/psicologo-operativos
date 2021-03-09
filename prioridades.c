#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMPR 12
#define TAMPF 33
#define TAMPA 4

//Arreglo que contiene los distintos niveles de prioridades
char nivelesPrioridades[TAMPR][TAMPF][TAMPA][TAMPR] = {{{"adios"},{"chao"},{"me","voy"},{"hora","de","irse"},
{"hora","de","irme"},{"tengo","que","irme"},{"acabo","el","tiempo"},{"hasta","luego"}},
{{"murio"},{"muere"},{"paso","a","mejor","vida"},{"estiro","la","pata"},{"fallecio"},
{"fallece"},{"perdio","la","vida"},{"costo","la","vida"},{"cobro","la","vida"}},
{{"mama"},{"madre"},{"papa"},{"padre"},{"hermano"},{"hermana"},{"tio"},{"tia"},
{"primo"},{"prima"},{"abuelo"},{"abuela"},{"es","mi"},{"se","trata","de","mi"}},
{{"creo"},{"cree"},{"pienso"},{"piensa"},{"recuerdo"},{"recuerda"},{"digo"},{"dice"},
{"hace"},{"hago"},{"igual"},{"iguales"},{"parece"},{"parecen"},{"parecidos"},
{"lo","mismo"}},{{"pueden"},{"perdon"},{"disculpa"},{"debo"},{"deberia"},
{"lo","siento"},{"lamento"}, {"maldito"},{"desgraciado"}},{{"paso"},{"ocurre"},
{"ocurrio"},{"cayo"},{"lanzo"},{"avento"},{"hizo"},{"hice"},{"logro"},{"logre"},
{"llego"},{"llegue"},{"soy"},{"estoy"},{"era"},{"fue"},{"perdio"},{"perdi"},{"gano"},
{"gane"},{"abuso"},{"abusa"},{"exagera"},{"trauma"},{"karma"},{"dolor"},{"duele"}},
{{"me","siento"},{"siento","que"},{"estoy","sintiendo"},{"molesto"},{"molesta"},
{"molestia"},{"ira"},{"colera"},{"coraje"},{"aguanto"},{"aguanta"},{"aguantar"},
{"solo"},{"sola"},{"feliz"},{"felicidad"},{"alegre"},{"alegria"},{"gusta"},{"triste"},
{"tristeza"},{"disgusto"},{"desagrado"},{"agrado"},{"agrada"},{"bueno"},{"buena"},
{"aguantar"},{"divertido"},{"divertida"},{"nauseas"},{"asco"},{"pena"}},{{"no"},
{"contrario"},{"malo"},{"mala"},{"pesimo"},{"pesima"},{"terrible"},{"horrible"},
{"aguante"},{"aguanto"},{"aguanta"},{"resisto"},{"resiste"},{"resistira"},{"chingada"}},
{{"tu"},{"usted"},{"vos"},{"eres"},{"sos"},{"sois"},{"estas"},{"el","es"},{"ella","es"},
{"que","es"},{"quien"},{"como"},{"cuando"},{"donde"},{"por","que"},{"cual"},{"cuales"}},
{{"no","se"},{"como","funciona"},{"que","debo","hacer"},{"que","hacer"},{"que","hago"}},
{{"para"},{"hacia"},{"hasta"},{"desde"},{"por"},{"mediante"},{"segun"},{"mientras"}},
{{"nosotros"},{"nos"},{"ellos"},{"todos"},{"todas"},{"muchos"},{"muchas"},{"abrumador"},
{"sobrecogedor"},{"lleva"},{"tan"}}};

//Arreglo es el arreglo de
int determinarPrioridad(char arreglo[], char prioridades[TAMPR][33][4][TAMPR]){
	//TamanoNivelesP es para delimitar hasta que nivel de prioridad se debe buscar
	int contador, prioridad, frase, palabra, tamanoNivelesP = TAMPR;
	//Recorre el arreglo de lo introducido por consola
	for(contador = 0; contador < strlen(arreglo); contador++){
		//Recorre los niveles de prioridades
		for(prioridad = 0; prioridad < tamanoNivelesP; prioridad++){
			//Recorre las frases dentro de los niveles de prioridades
			for(frase = 0; frase < strlen(prioridades[prioridad]); frase++){
				//Recorre la cantidad de palabras de una frase
				for(palabra = 0; palabra < strlen(prioridades[prioridad][frase]); palabra++){
					if(!strcmp(prioridades[prioridad][frase][palabra], arreglo[contador])){
						palabra = 100;
						frase = 100;
						tamanoNivelesP = prioridad;
					}
				}
			}
		}
	}
}


/*Creo que strlen es directamente para los strings y no para contar la cantidad de
arreglos internos, chequea como hacer eso. Hay vainas que no estoy definidiendo bien,
por eso chequea también las definiciones más que todo de los arreglos char y eso.*/