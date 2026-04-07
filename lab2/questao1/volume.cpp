//
// Created by julia on 27/03/2026.
//

#include "volume.h"
#include <iostream>
#include <string>

using namespace std;

Paralelepipedo::Paralelepipedo(int x, int y, int z) {
    setVolume(x,y,z);
}

void Paralelepipedo::setVolume(int v1, int v2, int v3) {
    if (v1 < 0 ) {x = 5;}
    else if (v2 < 0 ) {y = 5;}
    else if (v3 < 0 ) {z = 5;}
    else {x = v1, y = v2, z = v3;}
}

int Paralelepipedo::calculaVolume() {
    return x * y * z;
}

int Paralelepipedo::getVolume() {
    return calculaVolume();
}

// Arquivo principal
int main() {
    int dx, dy, dz;
    cout<<"Digite x: ";
    cin>>dx;

    cout<<"Digite y: ";
    cin>>dy;

    cout<<"Digite z: ";
    cin>>dz;

    Paralelepipedo paralelepipedo(dx,dy,dz);

    cout<<"O volume do paralelepipedo é: " << paralelepipedo.getVolume()<<endl;
}
