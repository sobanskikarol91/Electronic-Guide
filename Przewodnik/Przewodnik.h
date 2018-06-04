#pragma once
#include "Menu.h"

// Elementy
#include "Element.h"
#include "Elektrolityczny.h"
#include "LED.h"
#include "Zener.h"
#include "Ceramiczny.h"
#include "Elektrolityczny.h"

#define SIZE 12 // ilosc elementow w tablicy
class Przewodnik : Menu
{
	Element * elementy[SIZE];

public:
	Przewodnik() { dodajElementy(); }  // dodajemy elementy podczas tworzenia obiektu
	~Przewodnik()
	{
		for (int i = 0; i < SIZE; i++)
			delete elementy[i]; // zwalniamy wczesniej zaalokowana dynamicznie pamiec
	}

	void wyswietl_elementy(Element * wybrany_element)
	{
		naglowek();
		for (size_t i = 0; i < SIZE; i++)
		{
			// Przeszykujemy tablic�
			if (typeid(*elementy[i]).name() == typeid(*wybrany_element).name())
			{
				cout << "====================================" << endl;
				elementy[i]->wyswietl(); /// polimorfizm wywolujemy virtualna metode dla odpowiedniego elementu na ktory aktualnie wskazuje wskaznik
			}
		}
		nacisnij_przycisk();
	}

	void dodajElementy()
	{
		//TODO: zwolnic miejsce
		elementy[0] = new LED("L-2060GD ", "Zielony", 10, 2.5);
		elementy[1] = new LED("L-2060HD", "Czerwony", 20, 2);
		elementy[2] = new LED("L-2060SRC", "Czerwony", 20, 1.8);
		elementy[3] = new Ceramiczny("CC-820", 820);
		elementy[4] = new Ceramiczny("CC-680", 680);
		elementy[5] = new Ceramiczny("DECE33J222ZC4B", 2200);
		elementy[6] = new Elektrolityczny("WL2G107M18029BB", 800000);
		elementy[7] = new Elektrolityczny("WL2A476M10016BB ", 220000);
		elementy[8] = new Zener("BZX84C", 10, 10, 0.9);
		elementy[9] = new Zener("BZX84C12V", 12, 10, 0.9);
		elementy[10] = new Zener("BZX84C15V", 15, 10, 0.9);
		elementy[11] = new Zener("BZX84C22V", 22, 10, 0.9);
		elementy[11] = new Zener("BZX84C33V", 22, 10, 0.9);
	}

	void kondensatory_menu()
	{
		naglowek();
		cout << "1) Ceramiczne" << endl;
		cout << "2) Elektrolity" << endl;
		cout << "3) Powrot" << endl;

		switch (wybor(3))
		{
		case 1: wyswietl_elementy(&Ceramiczny()); break;
		case 2: wyswietl_elementy(&Elektrolityczny()); break;
		case 3: break;
		default: break;
		}
	}

	void diody_menu()
	{
		naglowek();
		cout << "1) LED" << endl;
		cout << "2) Zenera" << endl;
		cout << "3) Powrot" << endl;

		switch (wybor(3))
		{
		case 1:	wyswietl_elementy(&LED()); break;
		case 2: wyswietl_elementy(&Zener()); break;
		case 3: break;

		default: break;
		}
	}

	void menu()
	{
		naglowek();
		cout << "1) Kondensatory" << endl;
		cout << "2) Diody" << endl;
		cout << "3) Wyjscie" << endl;

		switch (wybor(3))
		{
		case 1: kondensatory_menu(); break;
		case 2: diody_menu(); break;
		case 3: exit(0);
		default: break;
		}

		menu(); // powrot do menu
	}

	void naglowek() override
	{
		cout << "================================" << endl;
		cout << "PRZEWODNIK ELEKTRONIKA" << endl;
		cout << "================================" << endl;
	}
};

