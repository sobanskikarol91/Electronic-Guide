#pragma once
#include "Dioda.h"

class LED : public Dioda
{
	string kolor; // kolor swiecenia
public:
	LED() : Dioda() {};
	LED(string model, string kolor, double max_prad_przewodzenia, double max_napiecie_wsteczne, double napiecie_przewodzenia) :
		Dioda(model, max_prad_przewodzenia, max_napiecie_wsteczne, napiecie_przewodzenia), kolor(kolor) {};


	virtual void wyswietl() override
	{
		Dioda::wyswietl();
		cout << "kolor swiecenia:" << endl;
	}
};

