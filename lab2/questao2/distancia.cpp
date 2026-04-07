//
// Created by julia on 28/03/2026.
//

#include "distancia.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void printCoordenadas(Ponto p) {
    cout << "("<<p.getPontoX() <<","<< p.getPontoY() <<","<< p.getPontoZ() << ")"<<endl;
}

Ponto::Ponto(double vx, double vy, double vz) {
    x = vx; y = vy; z = vz;
}
void Ponto::setPontoX(double vx) {x = vx;}
void Ponto::setPontoY(double vy) {y = vy;}
void Ponto::setPontoZ(double vz) {z = vz;}

double Ponto::getPontoX() {return x;}
double Ponto::getPontoY() {return y;}
double Ponto::getPontoZ() {return z;}

Linha::Linha(Ponto p_1, Ponto p_2) {p1 = p_1;p2 = p_2;}
void Linha::setP1(Ponto p ) {p1 = p;}
void Linha::setP2(Ponto p ) {p2 = p;}

double Linha::getComprimento() {
    double pontoX, pontoY, pontoZ;

    // calculo do comprimento entre os dois pontos
    pontoX = pow(p2.getPontoX() - p1.getPontoX(), 2);
    pontoY = pow(p2.getPontoY() - p1.getPontoY(), 2);
    pontoZ = pow(p2.getPontoZ() - p1.getPontoZ(), 2);

    return sqrt(pontoX + pontoY + pontoZ);
}


int main() {

    Ponto ponto1 (4,8,9); //coordenadas do ponto 1 do usuario
    Ponto ponto2; // coordenadas assumindo valores padrões
    Linha linha(ponto1,ponto2);

    cout << "Ponto 1: Coordenada ponto1 ";
    printCoordenadas(ponto1);
    cout << "Ponto 2: Coordenada ponto2 ";
    printCoordenadas(ponto2);
    cout<<"Distância dos dois pontos: "<<linha.getComprimento()<<endl;

    return 0;
}