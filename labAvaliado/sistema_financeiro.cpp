#include "sistema_financeiro.h"
#include <iostream>
using namespace std;

//função que insere um novo ativo
void SistemaFinanceiro::inserir_ativo(Ativo a) {ativos.push_back(a);}

//função que faz uma busca de ativos
string SistemaFinanceiro::localiza_ativo(string nome) {
    string mensagem = "";
    for (int i = 0; i < ativos.size(); i++) {
        if (ativos[i].getNome() == nome) {
            mensagem = "encontrado";
            ativos[i].exibirRelatorio();
            return mensagem;
        }
    }
    mensagem = "não encontrado";
    return mensagem;
}

//função que adiciona registro de um ativo ja existente
void SistemaFinanceiro::adicionar_registro(string nomeAtivo, RegistroValor registro) {
    for (int i = 0; i < ativos.size(); i++) {
        if (ativos[i].getNome() == nomeAtivo) {ativos[i].adicionarRegistro(registro);}
    }
}

//chama a função que calcula a média móvel para casa ativo cadastrado
void SistemaFinanceiro::exibir_media() {
    for (int i = 0; i < ativos.size(); i++) {
        ativos[i].media_movel();
    }
}

//função que lista todos os ativos
void SistemaFinanceiro::listar_ativos() {
    cout << "\n<---- ATIVOS CADASTRADOS ---->\n";
    for (int i = 0; i < ativos.size(); i++) {
        cout << "\nAtivo " << i + 1 << ":\n";
        ativos[i].exibirRelatorio();
    }
}

