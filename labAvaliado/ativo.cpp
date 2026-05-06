//
// Created by julia on 04/05/2026.
//

#include "ativo.h"
#include <iostream>
using namespace std;

Ativo::Ativo(string nome) {
    nomeAtivo = nome;
}
string Ativo::getNome() {
    return nomeAtivo;
}
void Ativo::adicionarRegistro(RegistroValor r) {
    registros.push_back(r);
}

void Ativo::exibirRelatorio() {
    cout << "Ativo: "<< nomeAtivo << endl;
    for (int i = 0; i < registros.size(); i++) {
        cout << "nome: " << registros[i].get_nome()<<endl;
        cout << "preço: " << registros[i].get_valor() << endl;
    }
}



