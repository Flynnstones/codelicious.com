#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int numeroMisterioso = 0, numeroInserito = 0;

    printf("Entrez le numéro mystérieux : ");
    
    // Vérification de la saisie numérique
    while (scanf("%d", &numeroMisterioso) != 1)
    {
        // Effacer le tampon d'entrée en cas de saisie incorrecte
        while (getchar() != '\n');
        
        printf("Veuillez entrer une valeur numérique valide : ");
    }

    system("clear");

    while (numeroInserito != numeroMisterioso)
    {
        printf("Devinez le numéro : ");

        // Vérification de la saisie numérique
        while (scanf("%d", &numeroInserito) != 1)
        {
            // Effacer le tampon d'entrée en cas de saisie incorrecte
            while (getchar() != '\n');
            
            printf("Veuillez entrer une valeur numérique valide : ");
        }

        if (numeroMisterioso < numeroInserito)
        {
            printf("-\n");
        }
        else if (numeroMisterioso > numeroInserito)
        {
            printf("+\n");
        }
        else
        {
            printf("BRAVO !\n");
        }
    }

    return 0;
}
