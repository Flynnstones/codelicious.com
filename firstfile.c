#include <stdio.h>
#include "firstfile.h"

int	main(int argc, char *argv[]){
switch (menu()){
	case 1: printf("Hai scelto il pollo arrosto\n");
	break;
	case 2: printf("Hai scelto il calamaro fritto\n");
	break;
	case 3: printf("Hai scelto lo spaghetto allo scoglio\n");
	break;
	case 4: printf("Hai scelto lo sgombro\n");
	break;}
return (0);
}

int     menu(){
int     scelta;

scelta = 0;
while (scelta < 1 || scelta > 4){
printf("\t\t Menu\n");
printf("1. Pollo arrosto in salsa ai funghi speziati\n");
printf("2. Calamari fritti con maionese vegana al limone\n");
printf("3. Spaghetti allo scoglio di Goldo Aranci\n");
printf("4. Sgombro al sapore d'estate\n");
printf("Cosa desideri per cena? Inserisci il numero: ");
scanf("%d", &scelta);}
return (scelta);}	
