// Implementation des fonctions du module lib.h

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

// Tableau des operations
const char *operations[8] = {
    "Addition",
    "Soustraction",
    "Multiplication",
    "Division",
    "Division entiere",
    "Reste division",
    "factoriel",
    "Puissance"
    };

// fonction saisie_int
int saisie_int()
{
    int entier;
    int saisie = scanf("%d", &entier);
    while (saisie != 1)
    {
      puts("Saisie invalide !!!");
      while(getchar() != '\n');
      puts("Veillez saisir un entier");
      saisie = scanf("%d", &entier);
    }
return entier;
}

// fonction saisie_float
float saisie_float()
{
    float nombre;
    float saisie = scanf("%f", &nombre);
    while (saisie != 1)
    {
      puts("Saisie invalide !!!");
      while(getchar() != '\n');
      puts("Veillez saisir un nombre");
      saisie = scanf("%d", &nombre);
    }
return nombre;
}

// fonction somme
float somme (float a, float b)
{
    return a + b;
}

// Fonction soustraction

float soustraction (float a, float b)
{
    return a - b;
}

// fonction multiplication

float multiplication(float a, float b)
{
    return a*b;
}

// fonction div_float

float div_float(float a, float b)
{
    return a/b;
}

// fonction dvi_int

int div_int (int a, int b)
{
    return a/b;
}

// fonction reste

int reste(int a, int b)
{
    return a%b;
}

// fonction factoriel

long long factoriel(int n)
{
int fact = 1;
if (n == 0 || n == 1)
return fact;
else
    {
        for(int i=1; i<=n; i++)
        {
            fact *= i;
        }
    }
return fact ;
}
// fonction factoriel version recursive

long long recursive_fact( int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n*factoriel(n-1);
    }
}

// fonction power

long long power( int nombre, int expo)
{
    int pow = 1;
    if(expo == 0)
        return pow;
    else
    {
        for(int i = 1; i <= expo; i++)
        {
            pow = pow*nombre ;
        }
    }
return pow;
}

// fonction choix

size_t  choix()
{
    puts("Entrez le numero de votre operation");
    size_t numero;
    int saisie = scanf("%lu", &numero);
    while (saisie != 1 || numero > 8 )
    {
        puts("Numero invalide !!!");
        while(getchar() != '\n');
        puts("Entrez le numero de votre operation");
        saisie = scanf("%lu", &numero);
    }
return numero;
}
