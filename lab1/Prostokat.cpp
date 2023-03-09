#include "Prostokat.h"
#include <iostream>

using namespace std;

Prostokat::Prostokat(double a, double b): a(a), b(b) {
    cout << "Konstruktor Prostokata (" << a << "," << b << ")" << endl;
}

double Prostokat::GetA() const {
    return a;
}

double Prostokat::GetB() const {
    return b;
}

void Prostokat::SetA(double a) {
    this->a = a;
}

void Prostokat::SetB(double b) {
    this->b = b;
}

double Prostokat::Obwod() {
    return 2*a+2*b;
}

double Prostokat::Pole() {
    return a*b;
}

void Prostokat::Wypisz(ostream& out) const {
    cout << "Prostokat o wymiarach: " << a << "x" << b << endl;
}

Prostokat::~Prostokat() {

}