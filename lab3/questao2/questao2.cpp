//
// Created by julia on 14/04/2026.
//

#include "questao2.h"
#include <iostream>
#include <string>
using namespace std;

void adicionarComPonteiro(string* texto, string sufixo) {
    string mensagem = *texto + sufixo;
    cout << "usando ponteiro:" << endl << mensagem << endl;
}
void adicionarComReferencia(string& texto, string sufixo) {
    string mensagem = texto + sufixo;
    cout <<"usando referência:"<<endl << mensagem << endl;
}
int main() {

    //usando ponteiro
    string mensagem;
    mensagem = "Olá ";
    adicionarComPonteiro(&mensagem, "mundo");

    //usando referência
    string& ref = mensagem;
    adicionarComReferencia(ref, "c++");


    return 0;
}