/*Este algoritmo lee una edad y te regresa a que tipo de categoría perteneces*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int edad;
	printf("\n\n\tBienvenido,teclea tu edad\n\t");
	scanf("%d",&edad); 
	system("cls");
		while (edad<0 || edad>110)
			{
			printf("\n\n\tError, intruduzca nuevamente la edad\n\t");
			scanf("%d",&edad);
			}
		system("cls");
		if (edad<=2)
			printf("\n\n\tPertenece a la categoria de los bebes");
		else
			if (edad<=10)
				printf("\n\n\tPertenece a la categoria de los niños");
			else
				if (edad<=18)
					printf("\n\n\tPertenece a la categoria de los adolescentes");
				else 
					if (edad<=60)
						printf("\n\n\tPertenece a la categoria de los adultos jovenes");
					else
						printf("\n\n\tPertenece a la categoria de los adultos mayores");
			
	
}
