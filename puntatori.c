#include <stdio.h>

void	minutaggio(int* puntaOre, int* puntaMinuti);

int	main(int argc, char *argv[])
{
	int ore;
	int minuti;

	ore = 0;
	minuti = 90;
	minutaggio(&ore, &minuti);
	while (ore >= 0)
	{
		if(ore == 1)
		{	
			printf("%d ora e %d minuti\n", ore, minuti);
		}
		else 
		{
			printf("%d ore e %d minuti\n", ore, minuti);
		}
		return(0);
	}
}

void	minutaggio(int* puntaOre, int* puntaMinuti)
{
	*puntaOre = *puntaMinuti / 60;
	*puntaMinuti = *puntaMinuti % 60;
}
