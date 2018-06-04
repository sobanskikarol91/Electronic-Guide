#include "Element.h"

Element::Element() :model("Nieznana"), kategoria("Nieznana") {}
Element::Element(string nazwa, string kategoria) : model(nazwa), kategoria(kategoria) {}

void Element::wyswietl()
{
	koloruj_txt("Model: " + model, KOLOR::ZIELONY);
}