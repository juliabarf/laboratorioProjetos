//
// Created by julia on 04/05/2026.
//
#include <iostream>
#include "main.h"
#include "sistema_financeiro.h"

struct Dados {
    string nome, nomeA;
    double preco;
};

Dados opcao1(string n) {
    Dados d;

    cout << n << endl;





    return d;
}

int main() {
    int opcao;

    SistemaFinanceiro sistema;
    Ativo acao("PETRA");

    acao.adicionarRegistro(RegistroValor("OLI", 18));
    //acao.adicionarRegistro(RegistroValor("JUL", 45));

    sistema.inserir_ativo(acao);
    sistema.localiza_ativo("PETRA");

    cout << "escolha uma opcao: " << endl;
    cin>>opcao;

    if (opcao == 1) {
        string n;
        SistemaFinanceiro sistema1;
        cout << "Para inserir um ativo, você precisa inserir os seguintes valores: " << endl;
        cout << "Nome do Ativo: ";
        getline(cin, n);

        int i = sistema1.localiza_ativo(n);
        if (i != -1) {
            Dados d = opcao1(n);
        }
    }

    return 0;

}