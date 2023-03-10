#include <iostream>
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

using namespace std;

int main() {
    // Deklaracje zmiennych lokalnych
    Prostokat prostokat = Prostokat(10.0, 20.0);
    Trojkat trojkat = Trojkat(11, 20, 30);
    Kolo kolo = Kolo(20);

    // Deklaracje przez wskazniki
    Prostokat* pP = &prostokat;
    Trojkat* pT = &trojkat;
    Kolo* pK = &kolo;

    // Konstruktory wypisuja sie przy deklaracji zmiennych lokalnych

    



    return 0;
}