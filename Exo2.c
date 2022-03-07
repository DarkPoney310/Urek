#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("****** WELCOME TO MY PROGRAMME ******\n");

	int num1, num2;

	printf("Veuillez entrer un nombre entier : ");
	scanf("%d",&num1);
	printf("\n");
	printf("Veuillez entrer un second nombre entier : ");
	scanf("%d",&num2);
	printf("\n");
	
	if (num1%num2 == 0)
	{
		printf("Le nombre %d est divisible par %d", num1, num2);
	}
	else {
		printf("Le nombre %d n'est pas divisible par %d", num1, num2);
	}


	return 0;
}