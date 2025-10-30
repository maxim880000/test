#include <stdio.h>

int main()
{
	int ChoixMenu;

	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("Votre choix ?\n");
	
	scanf("%d" , &ChoixMenu);

	switch(ChoixMenu)
	{
	case 1:
		printf("1. Royal Cheese\n");
		break;
	
	case 2:
		printf("2. Mc Deluxe\n");
		break;

	case 3:
		printf("3. Mc Bacon\n");
		break;

	case 4:
		printf("4. Big Mac\n");
		break;
	
	default:
		printf("vous n'avez pas rentrer un code correct\n");
		break;
	}
	printf("\n");
	return(0);
}