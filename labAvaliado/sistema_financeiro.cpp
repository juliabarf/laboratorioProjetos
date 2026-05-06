//
// Created by julia on 06/05/2026.
//
#include "sistema_financeiro.h"
#include <iostream>

using namespace std;
void SistemaFinanceiro::inserir_ativo(Ativo a) {
    ativos.push_back(a);
}
int SistemaFinanceiro::localiza_ativo(string nome) {
    for (int i = 0; i < ativos.size(); i++) {
        if (ativos[i].getNome() == nome) {
            return i;
        }
    }

    cout << "Ativo nao encontrado" << endl;
    return -1;
}