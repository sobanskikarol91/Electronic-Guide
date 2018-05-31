#pragma once
class Menu
{
public:
	Menu() {};

	//void virtual menu() =0;

	int wybor(int max, int min=1) // wartosc min 1 bo zazwyczaj taka bedzie jako pierwsza przy wyborze
	{
		char wybor;
		// dopoki wprowadzone sa bledne dane
		while (true)
		{
			cin >> wybor;
			system("cls"); // czyscimy ekran

			if ((int)wybor >= min + '0' && wybor <= max + '0')
				return wybor - '0';
			else
				cout << "Wprowadzono niepoprawne dane!" << endl;
		}
	}
};

