#include <stdio.h>
int main () {
int a, b, result;
char op;
// Demande deux nombres et un opérateur (+, -, *, /)
printf ("give me 2number and one operator: ");
scanf ("%d %d %c", &a, &b, &op);
// Utilise un switch pour effectuer l'opération
switch (op)
{
	case '-':
	result = a - b;
	break;

	case '+':
	result = a + b;
	break;

	case '*':
	result = a * b;
	break;

	case '/':
	if (b == 0)
		printf ("error no / par 0");
	else
	result = a / b;
	break;
}
printf ("les resultat est %d\n", result);
// Affiche le résultat
return 0;
}