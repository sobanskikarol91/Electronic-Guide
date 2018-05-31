#pragma once
#include "Element.h"
class Dioda : public Element
{
	double max_prad_przewodzenia;
	double max_napiecie_wsteczne;
	double napiecie_przewodzenia;
public:
	Dioda() : Element() {};
	Dioda(double max_prad_przewodzenia, double max_napiecie_wsteczne, double napiecie_przewodzenia) 
	:max_prad_przewodzenia(max_prad_przewodzenia), max_napiecie_wsteczne(max_napiecie_wsteczne), napiecie_przewodzenia(napiecie_przewodzenia) {};

	virtual void Wyswietl() override
	{
		Element::Wyswietl();
		cout << "Max prad przewodzenia: " << max_prad_przewodzenia << endl;
		cout << "Max namiecie wsteczne: " << max_napiecie_wsteczne << endl;
		cout << "Napiecie przewodzenia: " << napiecie_przewodzenia << endl;
	}
};

