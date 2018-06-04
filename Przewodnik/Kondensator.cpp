#include "Kondensator.h"

Kondensator::Kondensator() : Element() {};
Kondensator::Kondensator(string model, double pojemnosc) : Element(model, "Kondensator"), pojemnosc(pojemnosc) {};

void Kondensator::wyswietl()
{
	Element::wyswietl();   // wyswietlamy info z klasy bazowej
	cout << "Pojemnosc: " << pojemnosc << " pF" << endl;
}