 #include<stdio.h>
int main() { 
int i;
// Demande un nombre à l'utilisateur
printf("nombre:\n");
scanf ("%d", &i);
// Utilise l'opérateur % pour déterminer s'il est pair ou impair
// Affiche le résultat
if (i % 2 == 0)   // Et en C, « divisible par 2 » = « le reste de la division par 2 est égal à 0 »
printf ("%d is pair\n", i);

else 
printf ("%d is impair\n", i);

return(0);
} 