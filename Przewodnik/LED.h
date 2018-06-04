#pragma once
#include "Dioda.h"

class LED : public Dioda
{
	string kolor; // kolor swiecenia
public:
	LED();
	LED(string model, string kolor, double max_prad_przewodzenia, double napiecie_przewodzenia);

	virtual void wyswietl() override;
};

