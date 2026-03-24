/*  Criado por Júlia Barbosa
 *  Código que calcula o n-ésimo numero de uma série fibonacci */

#include "fibonacci.h"
#include <iostream>
using namespace std;

int fibonacci (int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci (n - 1) + fibonacci (n - 2);
}

int main () {
    int numero;

    cout << "indicie numero fibonacci: ";
    cin >> numero;
    cout <<"indicie: "<<fibonacci (numero);
    return 0;
}