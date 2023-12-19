#include <stdio.h>

void	stampa(int tabella[], int tagliaTabella); // oppure stampa(int *tabella, int tagliaTabella)

int	main(int argc, char *argv[])
{
	int tabella[4];

	tabella[0] = 0;
	tabella[1] = 1;
	tabella[2] = 2;
	tabella[3] = 3;

	stampa(tabella, 4);
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
