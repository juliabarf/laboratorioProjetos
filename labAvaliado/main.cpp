// Linguagem de Programação
// Laboratório 4 - exercicio avaliado
// Autora: Júlia Barbosa
// Arquivo principal - Sistema de Gestão de Ativos.

#include <iostream>
#include "main.h"
#include "sistema_financeiro.h"
using namespace std;


//função que faz o cadastri de um novo ativo
void cadastrar(string n, SistemaFinanceiro &sistema) {
    Ativo novoAtivo(n);
    string nome_registro;
    double valor_registro;

    cin.ignore();

    cout << "Nome do registro: ";
    getline(cin, nome_registro);

    cout << "Valor: ";
    cin >> valor_registro;

    novoAtivo.adicionarRegistro(RegistroValor(nome_registro, valor_registro));
    sistema.inserir_ativo(novoAtivo);
}

//função que armazena as operações de cada opção
void opcoes(int opcao, SistemaFinanceiro &sistema) {
    if (opcao == 1) {
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
    else if (opcao == 2) {
        string nomeAtivo, registroAtivo;
        double valorAtivo;

        cout << "Escreva o nome do ativo: ";
        cin >> nomeAtivo;

        if (sistema.localiza_ativo(nomeAtivo) == "encontrado") {
            cin.ignore();

            cout << "Escreva o nome do registro: ";
            getline(cin, registroAtivo);

            cout << "Valor do registro: ";
            cin >> valorAtivo;

            sistema.adicionar_registro(nomeAtivo,RegistroValor(registroAtivo, valorAtivo));
            sistema.listar_ativos();
        } else
            cout << "Ativo não encontrado" << endl;
    }

    //opção que chama a função que calcula a media móvel
    else if (opcao == 3) {sistema.exibir_media();}
}

//função principal
int main() {
    int opcao;
    SistemaFinanceiro sistema;

    // ativos cadastrados
    Ativo acao("PETRA");
    acao.adicionarRegistro(RegistroValor("REG1", 10));
    acao.adicionarRegistro(RegistroValor("REG2", 12));
    acao.adicionarRegistro(RegistroValor("REG3", 14));
    acao.adicionarRegistro(RegistroValor("REG4", 10));
    acao.adicionarRegistro(RegistroValor("REG5", 6));
    acao.adicionarRegistro(RegistroValor("REG6", 15));
    acao.adicionarRegistro(RegistroValor("REG7", 18));
    sistema.inserir_ativo(acao);

    Ativo acao2("VALE3");
    acao2.adicionarRegistro(RegistroValor("REG1", 20));
    acao2.adicionarRegistro(RegistroValor("REG2", 22));
    acao2.adicionarRegistro(RegistroValor("REG3", 24));
    acao2.adicionarRegistro(RegistroValor("REG4", 26));
    acao2.adicionarRegistro(RegistroValor("REG5", 28));
    acao2.adicionarRegistro(RegistroValor("REG6", 30));
    acao2.adicionarRegistro(RegistroValor("REG7", 32));
    sistema.inserir_ativo(acao2);


    Ativo acao3("ITUB4");
    acao3.adicionarRegistro(RegistroValor("REG1", 5));
    acao3.adicionarRegistro(RegistroValor("REG2", 7));
    acao3.adicionarRegistro(RegistroValor("REG3", 9));
    acao3.adicionarRegistro(RegistroValor("REG4", 11));
    acao3.adicionarRegistro(RegistroValor("REG5", 13));
    acao3.adicionarRegistro(RegistroValor("REG6", 15));
    acao3.adicionarRegistro(RegistroValor("REG7", 17));
    acao3.adicionarRegistro(RegistroValor("REG7", 45));
    sistema.inserir_ativo(acao3);

    string resposta = "s";

    while (resposta == "s" || resposta == "S") {
        cout << "------ MENU ------" << endl;
        cout << "1 - Inserção de um novo ativo." << endl;
        cout << "2 - Inserção de um novo registro de valor." << endl;
        cout << "3 - Cálculo da evolução da média móvel." << endl;


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