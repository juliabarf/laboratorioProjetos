//
// Created by julia on 14/04/2026.
//

#include "questao1.h"
#include <iostream>
#include <string>
using namespace std;


int main () {
    int x,y; //valores iniciais
    x = 10;
    y = 20;

    cout <<"valor de x inicial: " << x << endl;
    cout <<"valor de y inicial: " << y << endl;

    int* p = &x; // ponteiro que guarda x
    int& ref = x; // referencia que guarda x

    *p = 30; //troca o valor usando o ponteiro
    cout <<"valor de x trocado pelo ponteiro: " << *p << endl;
    ref = 40; //troca o valor usando referencia
    cout << "valor de x trocado pela referência: " << ref << endl;

    *p = y;
    ref = y;
    cout<<ref<<endl;
    cout << *p;


    return 0;
}
