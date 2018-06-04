#include "Menu.h"

int Menu::wybor(int max, int min) 
{
	char wybor;
	// dopoki wprowadzone sa bledne dane
	while (true)
	{
		cin >> wybor;
		system("cls"); // czyscimy ekran

		 // porownanie kodow ascii wprowadzonych danych
		if ((int)wybor >= min + '0' && wybor <= max + '0')
			return wybor - '0';
		else
			cout << "Wprowadzono niepoprawne dane!" << endl;
	}
}

void Menu::nacisnij_przycisk()
{
	cout << endl << "Nacisnij przycisk i zatwierdz enterem, aby przejsc dalej: " << endl;
	getchar();
	getchar();
	system("cls"); // czysc ekran
}
