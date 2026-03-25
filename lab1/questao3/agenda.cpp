// Laboratório 1: questão 3
// Disciplina: Linguagens de programação
// Data: 03/2026
// Código que armazena três nomes distintos, valida eles e exibe na tela os nomes validados inseridos
// Autora: Júlia Barbosa

#include "agenda.h"
#include <iostream>
#include <string>
using namespace std;

class Agenda {
    public:
        // recebe os nomes e chama o metodo validaNome para validar os nomes inseridos
        void setNomes() {
            string nome;
            for (int i=0; i<3; i++) {
                cout<<"Digite um nome: "<<endl;
                getline(cin, nome);
                nomes[i] = validaNome(nome);
            }
        }

        // exibe os nomes validados
        void getNomes() {
            cout<<"Os nomes digitados foram:"<<endl;
            for (int i=0; i<3; i++) {
                cout<<i+1<<": "<<nomes[i]<<endl;
            }

        }
    private:
        string nomes[3];

        // valida os nomes inseridos no metodo setNome
        string validaNome(string nome) {
            if (nome.length() > 10) {
                nome = nome.substr(0, 10);
                cout << "Esse nome tem mais de 10 caracteres e foi alterado para: " << nome<<endl;
            }
            return nome;

        }
};

int main() {
    Agenda agenda;
    agenda.setNomes();
    agenda.getNomes();

    return 0;
}