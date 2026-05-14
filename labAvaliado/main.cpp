// Linguagem de Programação
// Laboratório 4 - exercicio avaliado
// Autora: Júlia Barbosa
// Arquivo principal - Sistema de Gestão de Ativos.

#include <iostream>
#include "main.h"
#include "sistema_financeiro.h"
using namespace std;

//função que faz o cadastro de um novo ativo
void cadastrar(string n, SistemaFinanceiro &sistema) {
    Ativo novoAtivo(n);
    string nome_registro;
    double valor_registro;

    cout << "Nome do registro: ";
    getline(cin, nome_registro);

    cout << "Valor: ";
    cin >> valor_registro;

    novoAtivo.adicionarRegistro(RegistroValor(nome_registro, valor_registro));
    sistema.inserir_ativo(novoAtivo);
}

//função que armazena as operações de cada opção
void opcoes(string opcao, SistemaFinanceiro &sistema) {
    if (opcao == "1") {
        string nome_novoAtivo;

        cout << "Para inserir um ativo, informe os dados.\n";
        cout << "Nome do Ativo: ";
        cin >> nome_novoAtivo;

        if (sistema.localiza_ativo(nome_novoAtivo) == "encontrado") {
            cout << "Esse ativo ja existe!" << endl;
        } else {
            cadastrar(nome_novoAtivo, sistema);
            cout << "\nAtivo cadastrado com sucesso!" << endl;
            sistema.listar_ativos();
        }
    }

    //função que insere registros em um ativo já existente
    else if (opcao == "2") {
        string nomeAtivo, registroAtivo;
        double valorAtivo;

        cout << "Nome do ativo: ";
        cin >> nomeAtivo;

        if (sistema.localiza_ativo(nomeAtivo) == "encontrado") {
            cout << "Nome do registro: ";
            getline(cin, registroAtivo);
            cout << "Valor do registro: ";
            cin >> valorAtivo;

            sistema.adicionar_registro(nomeAtivo, RegistroValor(registroAtivo, valorAtivo));
            cout << "\nRegistro adicionado!" << endl;
            sistema.listar_ativos();
        } else {cout << "Ativo não encontrado!" << endl;}
    }

    else if (opcao == "3") {sistema.exibir_media();}

    else if (opcao == "4") {sistema.ordena_media();}

    else {cout << "Opção inválida! Escolha 1, 2, 3 ou 4." << endl;}
}

// menu do programa
void mostrar_menu() {
    cout << endl;
    cout << "         SISTEMA FINANCEIRO                        " << endl;
    cout << endl;
    cout << "1 - Inserir novo ativo                             " << endl;
    cout << "2 - Adicionar registro de valor                    " << endl;
    cout << "3 - Exibir as médias móveis dos ativos             " << endl;
    cout << "4 - Exibir ativos ordenados e variação anormal     " << endl;
    cout << "0 - SAIR                                           " << endl;
    cout << endl;
    cout << "Escolha uma opção: ";
}

//função principal
int main() {
    string opcao;
    SistemaFinanceiro sistema;

    // ✅ Ativos de teste (já com dados suficientes)
    Ativo vale3("VALE3");
    vale3.adicionarRegistro(RegistroValor("REG1", 20));
    vale3.adicionarRegistro(RegistroValor("REG2", 22));
    vale3.adicionarRegistro(RegistroValor("REG3", 24));
    vale3.adicionarRegistro(RegistroValor("REG4", 26));
    vale3.adicionarRegistro(RegistroValor("REG5", 28));
    vale3.adicionarRegistro(RegistroValor("REG6", 30));
    sistema.inserir_ativo(vale3);

    Ativo petra("PETRA");
    petra.adicionarRegistro(RegistroValor("REG1", 10));
    petra.adicionarRegistro(RegistroValor("REG2", 12));
    petra.adicionarRegistro(RegistroValor("REG3", 14));
    petra.adicionarRegistro(RegistroValor("REG4", 10));
    petra.adicionarRegistro(RegistroValor("REG5", 6));
    petra.adicionarRegistro(RegistroValor("REG6", 15));
    petra.adicionarRegistro(RegistroValor("REG6", 18));

    sistema.inserir_ativo(petra);

    Ativo itub4("ITUB4");
    itub4.adicionarRegistro(RegistroValor("REG1", 5));
    itub4.adicionarRegistro(RegistroValor("REG2", 7));
    itub4.adicionarRegistro(RegistroValor("REG3", 9));
    itub4.adicionarRegistro(RegistroValor("REG4", 11));
    itub4.adicionarRegistro(RegistroValor("REG5", 13));
    itub4.adicionarRegistro(RegistroValor("REG6", 15));
    itub4.adicionarRegistro(RegistroValor("REG7", 45));
    sistema.inserir_ativo(itub4);

    string resposta = "s";

    while (resposta == "s" || resposta == "S") {
        cout << "\n             MENU           "                          << endl;
        cout << "1 - Inserir um novo ativo."                              << endl;
        cout << "2 - Inserir um novo registro de valor."                  << endl;
        cout << "3 - Exibir média móvel."                                 << endl;
        cout << "4 - Exibir média móvel em ordem crescente e variação"    << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        opcoes(opcao, sistema);
        cout << "\nDeseja continuar? (s/n)" << endl;
        cin >> resposta;
    }
    if (resposta != "n" && resposta != "N") {cout << "Opção inválida!" << endl;}
    else
        cout << "Programa encerrado"<< endl;

    return 0;
}