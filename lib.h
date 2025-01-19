// protection contre les inclusions multiples

#ifndef LIB_H
#define LIB_H

// Tableau des operations de notre calculatrice
extern const char *operations[8];

//Fonction de saisie d'entier (int)

int saisie_int();

// Fonction de saisie d'un flotant (float)

float saisie_float();

// Fonction d'addition de deux nombres reels

float somme (float a, float b);

// fonction de soustraction de deux nombres reels

float soustraction (float a , float b);

// fonction de multiplication de deux nombres reels

float multiplication (float a , float b);

// Fonction de division de deux nombres reels

float div_float (float a , float b);

// Fonction de division entiere

int div_int (int a , int b);

// reste division euclidienne

int reste(int a, int b);

// fonction factoriel

long long factoriel (int n);

// fonction factoriel version recursive

long long recursive_fact(int n);

// fonction puissance

long long power(int nombre, int expo);

// Choix de l'operation a effectuer

size_t choix();


#endif
