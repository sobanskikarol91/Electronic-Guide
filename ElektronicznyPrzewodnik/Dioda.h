#pragma once
#include "Element.h"
class Dioda : public Element
{
	double max_prad_przewodzenia;
	double napiecie_przewodzenia;

protected: // konstruktory dostepne tylko dla klas pochodnych, nie mozemy stworzyc obiektu z zewnatrz 
	Dioda() : Element() {};
	Dioda(string nazwa, double max_prad_przewodzenia, double napiecie_przewodzenia)
		: Element(nazwa, "Dioda"), max_prad_przewodzenia(max_prad_przewodzenia), napiecie_przewodzenia(napiecie_przewodzenia) {};
public:
	virtual void wyswietl() override
	{
		Element::wyswietl();
		cout << "Max prad przewodzenia: " << max_prad_przewodzenia << " mA" <<endl;
		cout << "Napiecie przewodzenia: " << napiecie_przewodzenia << " V" << endl;
	}
};

