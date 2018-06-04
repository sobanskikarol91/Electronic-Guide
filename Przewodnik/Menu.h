#pragma once
#include <iostream>
using namespace std;

// klasa abstrakcyjna, ktora dostarcza funkcjonalnosci potrzebnej do pracy z menu
class Menu
{
public:
	int wybor(int max, int min = 1); // wartosc min 1 bo zazwyczaj taka bedzie jako pierwsza przy wyborze
	void nacisnij_przycisk();
	// metoda czysto wirtualna czyni ta klase abstrakcyjna
	virtual void naglowek() = 0;
};

