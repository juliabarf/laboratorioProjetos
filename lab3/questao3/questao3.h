//
// Created by julia on 15/04/2026.
//

#include <iostream>
#include <string>
using namespace std;

class Carro {
    public:
        Carro(string, int);
        void exibir();
        void atualizarAno(Carro* outro);
        void atualizarAno(Carro& outro);
    private:
        string modelo;
        int ano;
};


