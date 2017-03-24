/*Este programa lee una letra mayuscula y te dice que tipo de letra es*/
#include<stdio.h>
#include<ctype.h> /*Esta libreria se incluyó para poder convertir un letra a mayuscula con la función "toupper"*/
#include<stdlib.h>

main()
{
	char letra;
	printf("\n\n\tBienvenido, teclee la letra deseada\n\t");
	scanf("%c",&letra);
	letra=toupper(letra);
	system("cls");
		switch (letra)
			{
			case 'A': case'E': case'F': case'H': case'I': case'K': case'L':	case'M': case'N': case'T': case'V':	case'W': case'X': case'Y': case'Z': 
				printf("\n\n\tEl tipo de letra de '%c' es recta",letra);
				break;
			case'C': case'O':	case'S':	case'U':	case'Q':	
				printf("\n\n\tEl tipo de letra de '%c' es curva",letra);
				break;
			case'B': case'D':	case'G':	case'J':	case'P':	case'R':		
				printf("\n\n\tEl tipo de letra de '%c' es curva y recta",letra);
				break;
			default:
				printf("\n\n\tError. Caracter no valido");		
			}
}
