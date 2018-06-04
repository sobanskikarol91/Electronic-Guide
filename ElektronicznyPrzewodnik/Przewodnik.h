#pragma once
#include "Menu.h"
#include "stdafx.h"
// Elementy
#include "Element.h"
#include "Elektrolityczny.h"
#include "LED.h"
#include "Zener.h"
#include "Ceramiczny.h"
#include "Elektrolityczny.h"

#define SIZE 9 
class Przewodnik : Menu
{
	Element * elementy[50];

public:
	Przewodnik() { dodajElementy(); }  // dodajemy elementy podczas tworzenia obiektu
	~Przewodnik() 
	{
		for (int i = 0; i < SIZE; i++)
			delete elementy[i]; // zwalniamy wczesniej zaalokowana dynamicznie pamiec
	}

	void wyswietl_elementy(Element * wybrany_element)
	{
		for (size_t i = 0; i < SIZE; i++)
		{
			// Przeszykujemy tablicê
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
		elementy[3] = new Zener("z", 2, 3, 2);
		elementy[4] = new Ceramiczny("CC-820", 820);
		elementy[5] = new Ceramiczny("CC-680", 680);
		elementy[6] = new Ceramiczny("DECE33J222ZC4B", 2200);
		elementy[7] = new Elektrolityczny("WL2G107M18029BB", 800000);
		elementy[8] = new Elektrolityczny("WL2A476M10016BB ", 220000);
	}

	void kondensatory()
	{
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

	void diody()
	{
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
		cout << "1) Kondensatory" << endl;
		cout << "2) Diody" << endl;
		cout << "3) Wyjscie" << endl;

		switch (wybor(3))
		{
		case 1: kondensatory(); break;
		case 2: diody(); break;
		case 3: exit(0);
		default: break;
		}

		menu(); // powrot do menu
	}
};

