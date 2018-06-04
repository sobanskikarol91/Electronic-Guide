#pragma once

// klasa ktora dostarcza funkcjonalnosci potrzebnej do pracy z menu
class Menu
{
public:
	Menu() {};

	int wybor(int max, int min = 1) // wartosc min 1 bo zazwyczaj taka bedzie jako pierwsza przy wyborze
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

	void nacisnij_przycisk()
	{
		cout << endl << "Nacisnij przycisk aby przejsc dalej: " << endl;
		getchar();
		getchar();
		system("cls"); // czysc ekran
	}
};

