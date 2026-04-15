//
// Created by julia on 15/04/2026.
//
#include <iostream>
#include <string>
using namespace std;

int quadrado(int n) {
    return n*n;
}
double quadrado (double n) {
    return n*n;
}
// essas duas funções podem ser substituidas pela seguinte função
// template <class T>
// T quadrado(T n) {
//    return n*n;
//} essa função é um temlate que aparentemente não preciusa dessa diferenciação do sobrecarregado pq na hora de compliar da erro

int main () {
    cout << "quadrado inteiro: " << quadrado(5) << endl;
    cout << "quadrado double: " << quadrado(10.5) << endl;
    return 0;
}
