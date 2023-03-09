#include <iostream>
// #include "Prostokat.h"
// #include "Trojkat.h"
#include "Kolo.h"

using namespace std;

int main() {
    // Prostokat prostokat = Prostokat(10.0, 20.0);

    // double pole = prostokat.Pole();

    // cout << pole << endl;

    // Trojkat trojkat = Trojkat(11.0, 20, 30);

    Kolo kolo = Kolo(10);


    cout << kolo.Obwod() << endl;

    return 0;
}