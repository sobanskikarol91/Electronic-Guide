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

class Przewodnik : Menu
{
	Element * elementy[6];
public:
	void wyswietl_elementy(Element * wybrany_element)
	{
		for (size_t i = 0; i < 3; i++)
		{
			if (typeid(*elementy[i]).name() == typeid(*wybrany_element).name())
			{
				cout << "====================================" << endl;
				elementy[i]->wyswietl(); /// polimorfizm
			}
		}
	}

	void dodajElementy()
	{
		//TODO: zwolnic miejsce
		elementy[0] = new LED("L-2060GD ", "zielony", 10, 2.5,2.5);
		elementy[1] = new LED("L-2060HD", "Czerwony", 2, 4, 5);
		elementy[2] = new Zener("z",2,3,3,2);
		elementy[3] = new Ceramiczny();
	}

	void kondensatory()
	{
		cout << "1) Ceramiczne" << endl;
		cout << "2) Elektrolity" << endl;
		cout << "3) Powrot" << endl;

		switch (wybor(3))
		{
		case 1: Ceramiczny(); break;
		case 2: Elektrolityczny(); break;
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
			case 1:
			{
				LED l = LED();
				wyswietl_elementy(&l); break;
			}
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

