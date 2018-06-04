#pragma once
#include "Element.h"

class Dioda : public Element
{
	double max_prad_przewodzenia;
	double napiecie_przewodzenia;

protected: // konstruktory dostepne tylko dla klas pochodnych, nie mozemy stworzyc obiektu z zewnatrz 
	Dioda();
	Dioda(string nazwa, double max_prad_przewodzenia, double napiecie_przewodzenia);

public:
	virtual void wyswietl() override;
};

