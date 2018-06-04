#include "Przewodnik.h"
#include "EfektyWizualne.h"

// Klasy, konstruktory z lista inicjalizacyjna
// Dziedziczenie
// Metody virtualne -> wyswietl
// Hermetyzacja klas -> prywatne zmienne, nie mozliwosc stworzenia obiektow Kondensator i Dioda, a jedynie ich pochodnych
// Polimorfizm -> w Przewodniku dla virtualnej metody "wyswietl"
// Destruktor
// Klasa abstrakcyjna -> Menu
// Dynamiczna alokacja pamieci i zwalnianie w destruktorze -> Przewodnik

int main()
{
	zmien_kolor_txt(KOLOR::ZOLTY); // ustawiamy kolor tekstu konsoli
	Przewodnik p;
	p.menu();
	getchar();
    return 0;
}

