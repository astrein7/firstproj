// ConsoleApplication1.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	int jahr;
	int erg;
	printf("Bitte geben Sie ein Jahr ein: \n");
	scanf("%i", &jahr);
	erg = jahr % 4 == 0 && (jahr % 100 != 0 || jahr % 400 == 0);
	erg == 1 ? printf("%i ist ein Schaltjahr!", jahr) : printf("%i ist kein Schaltjahr!", jahr);





	return 0;
}