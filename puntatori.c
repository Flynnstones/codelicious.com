#include <stdio.h>

void	Minutaggio(int* puntatore, int* puntaminuti);

int	main(int argc, char *argv[])
{
	int ore;
	int minuti;

	ore = 0;
	minuti = 90;
	Minutaggio(&ore, &minuti);
	if (ore == 0 || ore > 1){
	printf("%d ore e %d minuti\n", ore, minuti);}
	else {
	printf("%d ora e %d minuti\n", ore, minuti);}
	return (0);
}

void	Minutaggio(int* puntatore, int* puntaminuti)
{
	*puntatore = *puntaminuti / 60;
	*puntaminuti = *puntaminuti % 60;
}
