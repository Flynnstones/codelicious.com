#include <stdio.h>
#include "tabelle.h"

int	main(int argc, char *argv[])
{
	int i;
	int tab_[4] = {0};
	int tab[4];
	
	tab[0] = 15;
	tab[1] = 81;
	tab[2] = 22;
	tab[3] = 13;

	copia(tab, tab_, 4);
	massimoTabella(tab_, 4, 50);
	riordinareTabella(tab, 4);
	i = 0;
	while(i < 4)
	{
		printf("%d\t", tab_[i]);
		printf("%d\n", tab[i]);
		i = i + 1;
	}
}

void copia(int tabellaOriginale[], int tabellaCopia[], int grandezzaTabella)
{
	int	i;

	i = 0;
	while (i < grandezzaTabella)
	{
		tabellaCopia[i] = tabellaOriginale[i];
		i = i + 1;
	}
}

void massimoTabella(int tabella[], int grandezzaTabella, int valoreMax)
{
	int     i;

        i = 0;
        while (i < grandezzaTabella)
        {
		if (tabella[i] > valoreMax)
		{
			tabella[i] = 0;
		}
		i = i + 1;
	}
}

void riordinareTabella(int tabella[], int grandezzaTabella)
{
	int     i;
	int	j;
	int	temp;

        i = 0;
        while (i < grandezzaTabella)
        {
		j = i + 1;
		while (j < grandezzaTabella)
		{
			temp = 0;
                	if (tabella[i] > tabella[j])
                	{
                       		temp = tabella[i];
                        	tabella[i] = tabella[j];
                        	tabella[j] = temp;
               		}
			j = j + 1;
		}
                i = i + 1;
        }
}
