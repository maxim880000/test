 #include <stdio.h>
int main(void)
{
int temp;
int tempF;
// Demande une température en Celsius
printf ("Entrez un temperature en Celsius:\n", temp);
scanf("%d", &temp);
// Convertit en Fahrenheit : F = C * 9/5 + 32
tempF = temp * 9.0/5.0 + 32
// Affiche le résultat
printf ("resultat: %d", tempF);
return 0;
}
