#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "engine.h"

char pole[10];

void tablica(){
	system("cls");
	system("mode con cols=37 lines=15");
	wprintf(L"\n");
	wprintf(L"               |     |     \n");
	wprintf(L"            %c  |  %c  |  %c  \n",pole[1],pole[2],pole[3]);
	wprintf(L"          _____|_____|_____\n");
	wprintf(L"               |     |     \n");
	wprintf(L"            %c  |  %c  |  %c  \n",pole[4],pole[5],pole[6]);
	wprintf(L"          _____|_____|_____\n");
	wprintf(L"               |     |     \n");
	wprintf(L"            %c  |  %c  |  %c  \n",pole[7],pole[8],pole[9]);
	wprintf(L"               |     |     \n");	
}

int wygrana(){
	if(pole[1] == pole[2] && pole[2] == pole[3])
		return 1;
	else if (pole[4] == pole[5] && pole[5] == pole[6])
		return 1;
	else if(pole[7] == pole[8] && pole[8] == pole[9])
		return 1;
	else if(pole[1] == pole[4] && pole[4] == pole[7])
		return 1;
	else if(pole[2] == pole[5] && pole[5] == pole[8])
		return 1;
	else if(pole[3] == pole[6] && pole[6] == pole[9])
		return 1;
	else if(pole[1] == pole[5] && pole[5] == pole[9])
		return 1;
	else if(pole[3] == pole[5] && pole[5] == pole[7])
		return 1;
	else if(pole[1] != '1' && pole[2] != '2' && pole[3] != '3' && pole[4] !='4' && pole[5] != '5' && pole[6] != '6' && pole[7] != '7' && pole[8] != '8' && pole[9] != '9')
		return 0;
	else 
		Beep(250,200);
		Beep(400,200); 
		return -1;	
}