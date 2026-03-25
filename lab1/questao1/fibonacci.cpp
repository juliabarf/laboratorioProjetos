// Laboratório 1: questão 2
// Disciplina: Linguagens de programação
// Data: 03/2026
// Código que retorna o indice x na série fibonacci.
// Autora: Júlia Barbosa

#include "fibonacci.h"
#include <iostream>
using namespace std;

// calcula o numero fubonacci
int fibonacci (int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else
        return fibonacci (n - 1) + fibonacci (n - 2);
}

int main () {
    int numero;

    cout << "indice numero fibonacci: ";
    cin >> numero;
    cout <<"numero do indice : "<<fibonacci (numero)<<endl;
    return 0;
}