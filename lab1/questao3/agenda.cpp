//
// Created by julia on 24/03/2026.
//

#include "agenda.h"
#include <iostream>
#include <string>
using namespace std;

class Agenda {
    public:
        void setNomes() {
            string nome;
            for (int i=1; i<4; i++) {
                cout<<"Digite um nome: "<<endl;
                getline(cin, nome);
                nomes[i] = validaNome(nome);
            }
        }
        string getNomes() {
            for (int i=0; i<4; i++) {
                cout<<nomes[i]<<endl;
            }

        }
    private:
        string nomes[3];
        string validaNome(string nome) {

            if (nome.length() > 10)
                cout << "tem mais de 10" << endl;
                nome = nome.substr(0, 10);
                cout << nome << endl;

            return nome;
        }
};

int main() {
    Agenda agenda;
    agenda.setNomes();
    agenda.getNomes();

    return 0;
}