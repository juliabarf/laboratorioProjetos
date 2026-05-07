//
// Created by julia on 02/05/2026.
//


#include "registro_valor.h"
#include <iostream>
using namespace std;

//construtor registra valor pra inicializar os atributos
RegistroValor::RegistroValor(string n, double preco) {nomeIndicador = n;valor = preco;}

//função que retorna o valor do registro do ativo
double RegistroValor::get_valor() {return valor;}

//função que retorna o nome indicador do ativo
string RegistroValor::get_nome() {return nomeIndicador;}

