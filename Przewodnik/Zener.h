#pragma once
#include "Dioda.h"
class Zener :public Dioda
{
	double napi�cie_przebicia_z�acza_pn;

public:
	Zener();
	Zener(string nazwa, double napi�cie_przebicia_z�acza_pn, double max_prad_przewodzenia, double napiecie_przewodzenia);

	virtual void wyswietl() override;
};

