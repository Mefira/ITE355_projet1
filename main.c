#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    puts("VOTRE CALCULATRICE EST PRETE");
    int tour =0;
    do{
    puts("Quelle operation voulez-vous effectuer ?");
    for (size_t i = 1; i <= 8; i++)
    {
        printf("%lu --> %s\n", i, operations[i-1]);
    }
    int numero = choix();
    switch (numero)
    {
    case 1:      //somme
        puts("Entrez le premier nombre");
        float nombre1 = saisie_float();
        puts("Entrez le deuxieme nomre");
        float nombre2 = saisie_float();
        printf("%f + %f = %f\n", nombre1, nombre2, somme(nombre1, nombre2));
        break;
    case 2:         //difference
        puts("Entrez le premier nombre");
        float nombre3 = saisie_float();
        puts("Entrez le deuxieme nomre");
        float nombre4 = saisie_float();
        printf("%f - %f = %f\n", nombre3, nombre4, soustraction(nombre3, nombre4));
        break;
    case 3:         // produit
        puts("Entrez le premier nombre");
        float nombre5 = saisie_float();
        puts("Entrez le deuxieme nomre");
        float nombre6 = saisie_float();
        printf("%f * %f = %f\n", nombre5, nombre6, multiplication(nombre5, nombre6));
        break;
    case 4:         // division
        puts("Entrez le premier nombre");
        float nombre7 = saisie_float();
        puts("Entrez le deuxieme nomre");
        float nombre8 = saisie_float();
        printf("%f / %f = %f\n", nombre7, nombre8, div_float(nombre7, nombre8));
        break;
    case 5:           //division entiere
        puts("Entrez le premier entier");
        int entier1 = saisie_int();
        puts("Entrez le deuxieme entier");
        int entier2 = saisie_float();
        printf("%d // %d = %d\n", entier1, entier2, div_int(entier1, entier2));
        break;
    case 6:        //reste modulo
        puts("Entrez le premier entier");
        int entier3 = saisie_int();
        puts("Entrez le deuxieme entier");
        int entier4 = saisie_float();
        printf("%d mod %d = %d\n", entier3, entier4, reste(entier3, entier4));
        break;
    case 7:         // factoriel
        puts("Entrez un entier");
        long entier = saisie_int();
        printf("factoriel(%d)= %lli\n", entier, factoriel(entier));
        break;
    case 8:        // puissance
        puts("Entrez un entier");
        int nombre = saisie_int();
        puts("Entrez l'exposant");
        int expo = saisie_int();
        printf("%d ^ %d = %lld\n", nombre, expo, power(nombre, expo));
        break;
    }
    puts("\n\n\nVoulez-vous effectuer une autre operation ?");
    puts("1 --> Oui");
    puts("0 --> Non");
    tour = saisie_int();
    while(tour != 0 && tour !=1)
    {
        puts("Choix non valide !!!");
        tour = saisie_int();
    }
    }while(tour == 1);
}
