#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "engine.h"

struct Gracze {
	char nick[12];
	int score;
} P[2];
/*2 Graczy grajacych pomiedzy soba*/

#include <fcntl.h>
#include <io.h>
int _setmode (
   int fd,
   int mode
);
/* unicode text */


char pole[10] = {'o','1','2','3','4','5','6','7','8','9'};
char rest[10];
char choice;
int graja=0;
char* data;
char nazwa[12];
int a;
/*wybor*/


int main(){
	strncpy(rest,pole,10);
	/*backup save*/
	
	setmode(_fileno(stdout), _O_U16TEXT);
	/*unicode text */
	
	
	Init:
	system("cls");
	system("color f0");
	system("title Kółko Krzyżyk v1.2");
	system("mode con cols=37 lines=15");
	wprintf(L"\n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"         Kolko Krzyzyk v1.2 \n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	Beep(165.4064,100);
	wprintf(L"\n");
	wprintf(L"       \x250F");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x2513\n");
	wprintf(L"     1 \x2503        Graj        \x2503 1\n");
	wprintf(L"       \x2517");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x251B\n");
	Beep(130.813,100);
	Beep(261.626,100);
	wprintf(L"       \x250F");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x2513\n");
	wprintf(L"     2 \x2503     Statystyki     \x2503 2\n");
	wprintf(L"       \x2517");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x251B\n");
	Beep(523.251,100);
	Beep(1046.50,100);
	wprintf(L"       \x250F");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x2513\n");
	wprintf(L"     3 \x2503       Reset        \x2503 3\n");
	wprintf(L"       \x2517");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x251B\n");
	/*STARTUP THEME*/
	
	Start:
	system("cls");
	system("color f0");
	system("title Kółko Krzyżyk v1.2");
	system("mode con cols=37 lines=15");
	wprintf(L"\n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"         Kolko Krzyzyk v1.2 \n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\n");
	wprintf(L"       \x250F");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x2513\n");
	wprintf(L"     1 \x2503        Graj        \x2503 1\n");
	wprintf(L"       \x2517");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x251B\n");

	wprintf(L"       \x250F");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x2513\n");
	wprintf(L"     2 \x2503     Statystyki     \x2503 2\n");
	wprintf(L"       \x2517");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x251B\n");
	
	wprintf(L"       \x250F");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x2513\n");
	wprintf(L"     3 \x2503       Reset        \x2503 3\n");
	wprintf(L"       \x2517");
	for (a=0; a<20; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\x251B\n");
	/*MENU STOSOWANE*/
	
	choice = getch();
	if (choice == '2' && graja == 1) 
	{
	system("cls");
	system("mode con cols=37 lines=15");
	wprintf(L"\n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"         Kolko Krzyzyk v1.2 \n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\n\n");
	for (a=0; a<13; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"Punktacja");
	for (a=0; a<15; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\n\n");
	wprintf(L" Gracz \x2460 %c%c%c%c%c%c%c%c%c%c%c%c : %d punktow.\n", P[1].nick[0], P[1].nick[1], P[1].nick[2], P[1].nick[3], P[1].nick[4], P[1].nick[5], P[1].nick[6], P[1].nick[7], P[1].nick[8], P[1].nick[9], P[1].nick[10], P[1].nick[11], P[1].score);
	wprintf(L" Gracz \x2461 %c%c%c%c%c%c%c%c%c%c%c%c : %d punktow.\n", P[2].nick[0], P[2].nick[1], P[2].nick[2], P[2].nick[3], P[2].nick[4], P[2].nick[5], P[2].nick[6], P[2].nick[7], P[2].nick[8], P[2].nick[9], P[2].nick[10], P[2].nick[11], P[2].score);
	wprintf(L"\n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\n\n");
	wprintf(L"  Dowolny przycisk aby kontynuowac.\n");
	getch();
	}
	if (choice == '3') 
	{
		/* reset pol */
		strncpy(pole,rest,10);
		/* reset danych graczy, statusu i punktacji */
		strcpy(P[1].nick, "0");
		strcpy(P[2].nick, "0");
		P[1].score = 0;
		P[2].score = 0;
		graja = 0;
		
		data="CreateObject(\"SAPI.SpVoice\").Speak\"Gra została zresetowana\"";
		FILE * fPtr;
		fPtr = fopen("voice.vbs", "w");
		fputs(data, fPtr);
		fclose(fPtr);
		system("start voice.vbs");
		/* Systemowy narrator wprowadzanie wartosci do komend vbs*/
		sleep(2);
		system("del voice.vbs");
	}
	
	int player = 1, i;
	/*gracz 1 zaczyna, i jako warunek zakonczenia while*/
	char znak;
	/*znaczniki x i o*/
	if (choice == '1') 
	{
		if (graja == 1) goto Game;
	system("cls");
	system("mode con cols=37 lines=15");
	wprintf(L"\n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"         Kolko Krzyzyk v1.2 \n");
	for (a=0; a<37; a++)
	{
		wprintf(L"\x2501");
	}
	wprintf(L"\n\n");
	wprintf(L"\t   Nick Gracza 1: \n");
	wprintf(L"\t   ");
	scanf(" %s", P[1].nick);
	wprintf(L"\n");
	wprintf(L"\t   Nick Gracza 2: \n");
	wprintf(L"\t   ");
	scanf(" %s", P[2].nick);
	wprintf(L"\n");
	wprintf(L"  Dowolny przycisk aby kontynuowac,\n    [X] Aby wprowadzic ponownie.");
	choice = getch();
	if (choice == 'n' || choice == 'x') goto Start;
	
	P[1].score = 0;
	P[2].score = 0;
	/* przed 1sza gra wyzerowanie awaryjne */
	Game:
	data="CreateObject(\"SAPI.SpVoice\").Speak\"Witaj w kółko i krzyżyk, Zasady są proste, wybieraj spośród pól od 1 do 9 aby wykonać swój ruch. Wybierając X wracasz do menu, Miłej Gry\"";
	FILE * fPtr;
	fPtr = fopen("voice.vbs", "w");
	fputs(data, fPtr);
	fclose(fPtr);
	if (graja==0) system("start voice.vbs");
	/* Systemowy narrator wprowadzanie wartosci do komend vbs*/
	graja = 1;

	/* value okresla czy gracze juz wpisywali sie */
	strncpy(pole,rest,10);
	/*restart pol restore*/
	sleep(1);
	system("del voice.vbs");
	do {
		player = (player % 2) ? 1 : 2;
		tablica();
		for (a=0; a<37; a++)
		{
		wprintf(L"\x2501");
		}
		wprintf(L"            Teraz Gracz %d\n",player);
		choice = getch();
		znak = (player == 1) ? 'X' : 'O';
		if(choice == 'x') goto Start;
		if(choice == '1' && pole[1] == '1')
			pole[1] = znak;
		else if(choice == '2' && pole[2] == '2')
			pole[2] = znak;
			else if(choice == '3' && pole[3] == '3')
			pole[3] = znak;
			else if(choice == '4' && pole[4] == '4')
			pole[4] = znak;
			else if(choice == '5' && pole[5] == '5')
			pole[5] = znak;
			else if(choice == '6' && pole[6] == '6')
			pole[6] = znak;
			else if(choice == '7' && pole[7] == '7')
			pole[7] = znak;
			else if(choice == '8' && pole[8] == '8')
			pole[8] = znak;
			else if(choice == '9' && pole[9] == '9')
			pole[9] = znak;
			
			else {
				data="CreateObject(\"SAPI.SpVoice\").Speak\"Wybierz poprawne pole od 1 do dziewięciu. Przycisk X by wyjść.\"";
				FILE * fPtr;
				fPtr = fopen("voice.vbs", "w");
				fputs(data, fPtr);
				fclose(fPtr);
				system("start voice.vbs");
				sleep(1);
				system("del voice.vbs");
				
				player--;
			}
			i = wygrana();
			player++;	
		
	}while(i == -1);

	tablica();
	if(i==1)
	{
		for (a=0; a<37; a++)
		{
		wprintf(L"\x2501");
		}
		wprintf(L"          Gracz %d wygrywa !!\n",--player);
		wprintf(L"\n");
		/* poprzedni ruszajacy sie gracz wygrywa */
		if (player == 1)
		{
		data="CreateObject(\"SAPI.SpVoice\").Speak\"Gratulacje gracz numer 1 wygrywa\"";
		P[1].score = P[1].score+1;	
		}
		if (player == 2)
		{
		data="CreateObject(\"SAPI.SpVoice\").Speak\"Gratulacje gracz numer 2 wygrywa\"";
		P[2].score = P[2].score+1;
		}
		FILE * fPtr;
		fPtr = fopen("voice.vbs", "w");
		fputs(data, fPtr);
		fclose(fPtr);
		system("start voice.vbs");
		/* Systemowy narrator wprowadzanie wartosci do komend vbs*/
		sleep(2);
		system("del voice.vbs");
		
		/*Mario Victory*/
		Beep(130,100);
		Beep(262,100);
		Beep(330,100);
		Beep(392,100);
		Beep(523,100);
		Beep(660,100);
		Beep(784,300);
		Beep(660,300);
		Beep(146,100);
		Beep(262,100);
		Beep(311,100);
		Beep(415,100);
		Beep(523,100);
		Beep(622,100);
		Beep(831,300);
		Beep(622,300);
		Beep(155,100);
		Beep(294,100);
		Beep(349,100);
		Beep(466,100);
		Beep(588,100);
		Beep(699,100);
		Beep(933,300);
		Beep(933,100);
		Beep(933,100);
		Beep(933,100);
		Beep(1047,400);
		wprintf(L"  Dowolny przycisk aby kontynuowac.\n");
		getch();
		goto Game;
	}
	else 
		{
		for (a=0; a<37; a++)
		{
		wprintf(L"\x2501");
		}
		wprintf(L"                Remis\n");
		wprintf(L"\n");
		wprintf(L"  Dowolny przycisk aby kontynuowac.\n");
		getch();
		}
		goto Game;
		return 0;
}
if (choice == '4')
{
	data="CreateObject(\"SAPI.SpVoice\").Speak\"Gratulacje odkryłeś sekret w grze !\"";
	FILE * fPtr;
	fPtr = fopen("voice.vbs", "w");
	fputs(data, fPtr);
	fclose(fPtr);
	system("start voice.vbs");
	MessageBox(0, "Odkryłeś sekret w grze !","Easter Egg", 0);
	sleep(1);
	system("del voice.vbs");
	/* Systemowy narrator wprowadzanie wartosci do komend vbs*/
}
goto Start;
}
	
