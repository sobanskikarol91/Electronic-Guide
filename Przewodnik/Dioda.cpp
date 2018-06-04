#include "Dioda.h"

Dioda::Dioda() : Element() {};
Dioda::Dioda(string nazwa, double max_prad_przewodzenia, double napiecie_przewodzenia)
	: Element(nazwa, "Dioda"), max_prad_przewodzenia(max_prad_przewodzenia), napiecie_przewodzenia(napiecie_przewodzenia) {};

void Dioda::wyswietl()
{
	Element::wyswietl();
	cout << "Max prad przewodzenia: " << max_prad_przewodzenia << " mA" << endl;
	cout << "Napiecie przewodzenia: " << napiecie_przewodzenia << " V" << endl;
}