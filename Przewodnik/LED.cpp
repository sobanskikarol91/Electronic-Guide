#include "LED.h"

LED::LED() : Dioda() {};
LED::LED(string model, string kolor, double max_prad_przewodzenia, double napiecie_przewodzenia) :
	Dioda(model, max_prad_przewodzenia, napiecie_przewodzenia), kolor(kolor) {};

void LED::wyswietl() 
{
	Dioda::wyswietl();
	cout << "Kolor swiecenia: " << kolor << endl;
}
