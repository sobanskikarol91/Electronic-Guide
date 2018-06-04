#pragma once
#include "Dioda.h"

class LED : public Dioda
{
	string kolor; // kolor swiecenia
public:
	LED() : Dioda() {};
	LED(string model, string kolor, double max_prad_przewodzenia, double napiecie_przewodzenia) :
		Dioda(model, max_prad_przewodzenia, napiecie_przewodzenia), kolor(kolor) {};


	virtual void wyswietl() override
	{
		Dioda::wyswietl();
		cout << "Kolor swiecenia: " << kolor << endl;
	}
};

