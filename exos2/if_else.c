#include <stdio.h>
int main( ) {
int a, b, c;
int max;
// Demande 3 nombres à l'utilisateur
printf("give me 3 number:")
scanf("%d %d %d", &a, &b, &c);
// Trouve et affiche le plus grand
if (a >= b)
{
	if (a >= c)
		max = a;
	else
		max = c;
}
else // (b >= a)
{
	if (b >= c)
		max = b;
	else 
		max = c;
}
// Utilise des if/else imbriqués
printf ("%d\n", max);

return 0 ;
}