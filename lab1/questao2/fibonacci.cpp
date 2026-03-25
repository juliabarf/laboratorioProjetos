// Laboratório 1: questão 2
// Disciplina: Linguagens de programação
// Data: 03/2026
// Código que retorna o indice x na série fibonacci. Versão utilizando programação orientada a objetos
// Autora: Júlia Barbosa

#include "fibonacci.h"
#include <iostream>
using namespace std;

class Fibonacci {
    public:
        void setFibonacci(int numero) {
            resultado = computeFibonacci(numero);
        }
        int getFibonacci() { return resultado; }
    private:
        int computeFibonacci(int n) {
            if (n == 0)
                return 0;
            else if (n == 1)
                return 1;
            else
                return computeFibonacci (n - 1) + computeFibonacci (n - 2);
        }
        int resultado;
};

int main() {
    int n;
    cout << "digite o indice da sequencia fibonacci: ";
    cin >> n;
    Fibonacci fibonacci;
    fibonacci.setFibonacci(n);
    cout << "numero: " << fibonacci.getFibonacci()<<endl;
}