#include <stdio.h>
int main( )  { 
// Déclare deux variables a=5 et b=10 
int a = 5;
int b = 10;
// Échange leurs valeurs SANS utiliser de 3ème variable
a = a + b;

b = a - b;
a = a - b;

// Astuce : utilise l'addition et la soustraction
return(0);
} 