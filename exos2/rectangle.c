 #include <stdio.h>
int main() { 
int a, b, resultat;
// Demande la longueur et largeur d'un rectangle
printf ("longeur: et largeur: ");
scanf("%d %d", &a, &b);
// Calcule et affiche l'aire et le périmètre
resultat = a * b;
printf("%d",resultat);

resultat = 2 * a + 2 * b;
printf("%d",resultat);

return (0);
}
