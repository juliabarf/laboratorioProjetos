//
// Created by julia on 02/05/2026.
//


#include "registro_valor.h"
#include <iostream>
using namespace std;

RegistroValor::RegistroValor(string n, double preco) {
    nomeIndicador = n;
    valor = preco;
}
double RegistroValor::get_valor() {
    return valor;
}
string RegistroValor::get_nome() {
    return nomeIndicador;
}

