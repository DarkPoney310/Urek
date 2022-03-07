#include <stdio.h>
#include <stdlib.h>


int main()
{
    float num1, num2;
    char operator;

    do 
    {
        printf("Veuillez entrer un nombre suivi d'un espace et de la lettre 'S' pour commencer : ");
        scanf("%f %c", &num1, &operator);
        printf("\n");

    } while (operator != 'S');


    do
    {
    	printf("Veuillez entrer un nombre suivi d'un espace et de l'operateur(+,-,*,/) : ");
    	scanf("%f %c", &num2, &operator);
    	printf("\n");

    	if ( operator == '+' || operator == '-' || operator == '/' || operator == '*')
    	{
    		switch (operator)
            {
            	case '+':
            	num1 += num2;
            	printf("=%.6f\n", num1);
            	break;

            	case '-':
            	num1 -= num2;
            	printf("=%.6f\n", num1);
            	break;

            	case '*':
            	num1 *= num2;
            	printf("=%.6f\n", num1);
            	break;

            	case '/':
            	if( num2 == 0)
            		printf("Impossible de diviser par 0 \n");
            	else
            	{
            		num1 /= num2;
            		printf("%.6f\n", num1);
            	}
            	break;

            	/*default:
            	printf("Veuillez saisier le bon oprérateur (+,-,*,/) : ");
            	break;*/
            }
        }
        else
        	printf("Veuillez saisier le bon oprérateur (+,-,*,/,E,S)\n");

    } while (operator != 'E'); 

    printf("Fin des calcul");
    return 0;

}