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
	Przewodnik();
	~Przewodnik();

	void wyswietl_elementy(Element * wybrany_element);
	void dodajElementy();
	void kondensatory_menu();
	void diody_menu();
	void menu();
	void naglowek() override;
};

