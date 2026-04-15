//
// Created by julia on 15/04/2026.
//

#include "questao3.h"
#include <string>
#include <iostream>

using namespace std;

Carro::Carro(string m, int a) {
    modelo = m;
    ano = a;
}

void Carro::exibir() {
    cout << modelo << endl;
    cout << ano << endl;
}
void Carro::atualizarAno(Carro* outro) {

}

void Carro::atualizarAno(Carro& outro) {

}

int main() {
    Carro c1("nissan", 2022);
    Carro c2("tesla", 2000);
    cout << "Antes da modificação: " << endl;
    c1.exibir();


}