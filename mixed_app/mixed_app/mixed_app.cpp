// mixed_app.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include<stdio.h>
#include<stdlib.h>
#include"firstProjFun.h"
#include"stdafx.h"




int main()
{
	int a = 0;
	system("COLOR");

	printf("\033[46m+++++++++Auswahl+++++++++++");
	printf("\033[1m Bitte Auswahl treffen\033n");
	printf("K = Kindergeburtstag\n");
	printf("S = Scan berechnen\n");
	scanf("%c", &a);

	a == 115 || a == 83 ? fScan() : fKinder();


	return 0;
}