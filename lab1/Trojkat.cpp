#include "Trojkat.h"
#include <iostream>
#include <tgmath.h>

using namespace std;

Trojkat::Trojkat(double a, double b, double c): a(a), b(b), c(c) {
    // Zmiast a(a) moze byc SetA(a) i analogicznie SetB(b) oraz SetC(c);
    cout << "Konstruktor Trojkata (" << a << "," << b << "," << c << ")" << endl;
} 

double Trojkat::GetA() const {
    return a;
}

double Trojkat::GetB() const {
    return b;
}

double Trojkat::GetC() const {
    return c;
}

void Trojkat::SetA(double a) {
    this->a = a;
}

void Trojkat::SetB(double b) {
    this->b = b;
}

void Trojkat::SetC(double c) {
    this->c = c;
}

double Trojkat::Pole() {
    double p = (a+b+c)/2;

    cout << p << endl;

    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double Trojkat::Obwod() {
    return a+b+c;
}

void Trojkat::Wypisz(ostream& out) const {
}

Trojkat::~Trojkat() {
    cout << "Destruktor Trojkata (" << a << "," << b << "," << c << ")" << endl;
}

