// ElektronicznyPrzewodnik.cpp : Defines the entry point for the console application.
#include "Przewodnik.h"
#include "EfektyWizualne.h"
// Klasy, konstruktory z lista inicjalizacyjna
// Dziedziczenie
// Metody virtualne
// Hermetyzacja klas
// Polimorfizm
// Destruktor

int main()
{
	zmien_kolor_txt(KOLOR::ZOLTY); // ustawiamy kolor tekstu konsoli
	Przewodnik p;
	p.menu();
	getchar();
    return 0;
}

