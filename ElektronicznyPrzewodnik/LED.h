#pragma once
#include "Dioda.h"

class LED : public Dioda
{
	string kolor; // kolor swiecenia
public:
	LED() : Dioda() {};
	LED(string kolor, string, double max_prad_przewodzenia, double max_napiecie_wsteczne, double napiecie_przewodzenia) :
		Dioda(max_prad_przewodzenia, max_napiecie_wsteczne, napiecie_przewodzenia), kolor(kolor) {};

	virtual void Wyswietl() override
	{
		Dioda::Wyswietl();
		cout << "kolor swiecenia:" << endl;
	}
};

