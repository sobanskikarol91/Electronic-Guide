#pragma once
#include "Dioda.h"
class Zener :public Dioda
{
	double napi�cie_przebicia_z�acza_pn;

public:
	Zener() : Dioda() {};
	Zener(string nazwa, double napi�cie_przebicia_z�acza_pn, double max_prad_przewodzenia, double max_napiecie_wsteczne, double napiecie_przewodzenia)
		:Dioda(nazwa, max_prad_przewodzenia, max_napiecie_wsteczne, napiecie_przewodzenia),
		napi�cie_przebicia_z�acza_pn(napi�cie_przebicia_z�acza_pn) {}

	virtual void wyswietl() override
	{
		cout << "Napiecie przebicia p-n: " << napi�cie_przebicia_z�acza_pn << endl;
	}
};
