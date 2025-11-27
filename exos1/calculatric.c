#include <stdio.h>

int main() {
    // Déclare deux entiers a et b
    // Demande à l'utilisateur de les saisir
    // Affiche leur somme, différence, produit et quotient
    
	int a, b, result;
	
	scanf("%d", &a);
	scanf("%d",&b );
	result = a + b;
	printf("%d\n",result);
	result = a - b;
	printf("%d\n",result);
	result = a / b;
	printf("%d\n",result);
    return 0;
}