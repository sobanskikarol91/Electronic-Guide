#pragma once
#include "Dioda.h"
class Zener :public Dioda
{
	double napiêcie_przebicia_z³acza_pn;

public:
	Zener() : Dioda() {};
	Zener(string nazwa, double napiêcie_przebicia_z³acza_pn, double max_prad_przewodzenia, double max_napiecie_wsteczne, double napiecie_przewodzenia)
		:Dioda(nazwa, max_prad_przewodzenia, max_napiecie_wsteczne, napiecie_przewodzenia),
		napiêcie_przebicia_z³acza_pn(napiêcie_przebicia_z³acza_pn) {}

	virtual void wyswietl() override
	{
		cout << "Napiecie przebicia p-n: " << napiêcie_przebicia_z³acza_pn << endl;
	}
};

