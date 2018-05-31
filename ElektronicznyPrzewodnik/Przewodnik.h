#pragma once
#include "Menu.h"
#include "stdafx.h"

class Przewodnik : Menu
{
public:
	void kondensatory()
	{
		cout << "1) Ceramiczne" << endl;
		cout << "2) Elektrolity" << endl;
		cout << "3) Powrot" << endl;

		switch (wybor(3))
		{
		case 1: kondensatory(); break;
		case 2: diody(); break;
		case 4: break;

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
		case 1: kondensatory(); break;
		case 2: diody(); break;
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

