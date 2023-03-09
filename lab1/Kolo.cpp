#include "Kolo.h"
#include <iostream>
#define PI 3.14

using namespace std;

Kolo::Kolo(double r): r(r) {
    cout << "Kolo o promieniu: " << r << endl;
}

double Kolo::GetR() const {
    return r;
}

void Kolo:: SetR(double r) {
    this->r = r;
}

double Kolo::Pole()  {
    return PI*r*r;
}

double Kolo::Obwod() {
    return 2*PI*r;
}

void Kolo::Wypisz(ostream& out) const {

}

Kolo::~Kolo() {

}