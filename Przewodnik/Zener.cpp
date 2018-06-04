#include "Zener.h"

Zener::Zener() : Dioda() {};
Zener::Zener(string nazwa, double napiêcie_przebicia_z³acza_pn, double max_prad_przewodzenia, double napiecie_przewodzenia)
	:Dioda(nazwa, max_prad_przewodzenia, napiecie_przewodzenia),
	napiêcie_przebicia_z³acza_pn(napiêcie_przebicia_z³acza_pn) {}

void Zener::wyswietl()
{
	Dioda::wyswietl();
	cout << "Napiecie przebicia p-n: " << napiêcie_przebicia_z³acza_pn << endl;
}