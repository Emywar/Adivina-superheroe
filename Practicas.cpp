#include <stdio.h>
#include <ctype.h>
void main(void)
{
	char respuesta[20];
	printf("Es verde?? [S/N} \n");
	scanf_s("%s", respuesta, 3);
	if ( toupper(respuesta[0]) == 'S')
	{
		printf("Es Hulk");
	}
	else
	{
		printf("Es mujer??[S/N] \n");
		scanf_s("%s", respuesta, 3);
		if (toupper(respuesta[0]) == 'S')
		{
			printf("Es la viuda negra");
		}
		else
		{
			printf("Tiene martillo?? [S/N] \n");
			scanf_s("%s", respuesta, 3);
			if (toupper(respuesta[0]) == 'S')
			{
				printf("Es Thor");
			}
			else
			{
				printf("Es pobre??[S/N} \n");
				scanf_s("%s", respuesta, 3);
				if (toupper(respuesta[0]) == 'S')
				{
					printf("Es Spider Man");
				}
				else
				{
					printf("Tiene un walkman?? [S/N] \n");
					scanf_s("%s", respuesta, 3);
					if (toupper(respuesta[0]) == 'S')
					{
						printf("Es Star-Lord");
					}
					else
					{
						printf("Tiene escudo?? [S/N] \n");
						scanf_s("%s", respuesta, 3);
						if (toupper(respuesta[0]) == 'S')
						{
							printf("Es el Capitan America");
						}
						else
						{
							printf("Baila chistoso?? [S/N] \n");
							scanf_s("%s", respuesta, 3);
							if (toupper(respuesta[0]) == 'S')
							{
								printf("Yo soy Groot");
							}
							else
							{
								printf("Es Ant Man");
							}
						}
					}

				}
			}
		}
	}
}