// ElektronicznyPrzewodnik.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "Przewodnik.h"
#include "Element.h"
#include "Elektrolityczny.h"
#include "LED.h"
#include "Zener.h"


// Klasy, konstruktory z lista inicjalizacyjna
// Dziedziczenie
// Metody virtualne
// Hermetyzacja klas
// Polimorfizm


int main()
{
	Przewodnik p;
	p.dodajElementy();
	p.menu();
	getchar();
    return 0;
}

