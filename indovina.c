#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(int argc, char *argv[])
{
	int numeroMisterioso = 0, numeroInserito = 0;
	
	scanf("%d", &numeroMisterioso);
	system("clear");
	while(numeroInserito != numeroMisterioso)
	{
		printf("Indovina il numero? ");
        	scanf("%d", &numeroInserito);
		if(numeroMisterioso < numeroInserito)
		{
			printf("-\n");
		}	
		else if(numeroMisterioso >  numeroInserito)
		{
			printf("+\n");
		}
		else
		{
                printf("BRAVO!\n");
        	}
	}
	return (0);
}
