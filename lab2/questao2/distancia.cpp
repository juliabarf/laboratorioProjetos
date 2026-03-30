//
// Created by julia on 28/03/2026.
//

#include "distancia.h"
#include <iostream>
#include <string>

using namespace std;

Ponto::Ponto(int vx, int vy, int vz) {
    x = vx;
    y = vy;
    z = vz;
}
int Ponto::getPontoX() {
    return x;
}
int Ponto::getPontoY() {
    return y;
}
int Ponto::getPontoZ() {
    return z;
}


int main() {

    Ponto ponto1(3, 4, 5);
    cout<<"Ponto x: "<<ponto1.getPontoX()<<endl;

    return 0;
}