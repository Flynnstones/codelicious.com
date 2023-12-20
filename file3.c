#include <stdio.h>
#include "file3.h"

int	main(int argc, char *argv[])
{
	int tabella[4];
	int somma;
	double media;	

	tabella[0] = 0;
	tabella[1] = 1;
	tabella[2] = 2;
	tabella[3] = 3;

	stampa(tabella, 4);

	somma = sommaTabella(tabella, 4);
	printf("La somma dei valori presenti nella variabile 'tabella' è uguale a %d\n", somma);
	
	media = mediaTabella(tabella, 4);
	printf("La media dei valori presenti nella variabile 'tabella' è uguale a %f\n", media);
	return(0);
}

void    stampa(int tabella[], int tagliaTabella)
{
	int	i;

	i = 0;
	while (i < tagliaTabella)
	{
		printf("Valore di tabella[%d] è %d\n", i, tabella[i]);
		i = i + 1;
	}
}

int     sommaTabella(int tabella[], int tagliaTabella)
{
	int	i;
	int	somma;

	i = 0;
	somma = 0;
	while (i < tagliaTabella)
	{
		somma = somma + tabella[i];
		i = i + 1;
	}
	return (somma);
}

double	mediaTabella(int tabella[], int tagliaTabella)
{
	int	i;
	int	somma;
	double	media;

	i = 0;
	media = 0;
	somma = 0;
	while (i < tagliaTabella)
        {
                somma = somma + tabella[i];
                i = i + 1;
        }
	media = (double)somma / tagliaTabella;
        return (media);
}
