#pragma once
#include "Dioda.h"
class Zener :public Dioda
{
	double napiêcie_przebicia_z³acza_pn;

public:
	Zener();
	Zener(string nazwa, double napiêcie_przebicia_z³acza_pn, double max_prad_przewodzenia, double napiecie_przewodzenia);

	virtual void wyswietl() override;
};

