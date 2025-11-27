#include <stdio.h>
int main ()
{
int number;
// Demande un nombre
printf ("random number:");
scanf ("%d", &number);

// Vérifie s'il est multiple de 3 ET de 5
if (number % 3 == 0 && number % 5 == 0)
printf ("%d est un multiple de 3 et 5\n", number);

else 
printf ("%d si not a mult of 3 and 5\n", number);

// Utilise l'opérateur && et % 
}