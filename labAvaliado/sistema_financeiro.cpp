#include "sistema_financeiro.h"
#include <iostream>
#include <algorithm>

using namespace std;

//função que insere um novo ativo
void SistemaFinanceiro::inserir_ativo(Ativo a) {ativos.push_back(a);}

//função que faz uma busca de ativos
string SistemaFinanceiro::localiza_ativo(string nome) {
    string mensagem = "";
    for (size_t i = 0; i < ativos.size(); i++) {  // size_t
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
    for (size_t i = 0; i < ativos.size(); i++) {  // size_t
        if (ativos[i].getNome() == nomeAtivo) {
            ativos[i].adicionarRegistro(registro);
        }
    }
}

// ✅ OPÇÃO 3: Exibe TODAS as médias móveis de cada ativo
void SistemaFinanceiro::exibir_media() {
    if (ativos.size() == 0) {
        cout << "\nNenhum ativo cadastrado!" << endl;
        return;
    }

    cout << "\n=== TODAS AS MÉDIAS MÓVEIS ===" << endl;
    for (size_t i = 0; i < ativos.size(); i++) {
        ativos[i].media_movel();  // ✅ Chama função que exibe TODAS
    }
}

// ✅ OPÇÃO 4: Análise da ÚLTIMA média + ordenação
void SistemaFinanceiro::ordena_media() {
    if (ativos.size() == 0) {
        cout << "Nenhum ativo cadastrado!" << endl;
        return;
    }

    vector<Media> todasUltimasMedias;

    // 1. PRIMEIRO: Coleta TODAS as últimas médias
    for (size_t i = 0; i < ativos.size(); i++) {
        vector<Media> mediasAtivo = ativos[i].media_movel();
        if (mediasAtivo.size() > 0) {
            todasUltimasMedias.push_back(mediasAtivo[0]);
        }
    }

    // 2. Ordena as últimas médias
    vector<Media> mediasOrdenadas = ativos[0].ordena_media(todasUltimasMedias);

    // 3. PRIMEIRO: Exibe ordenadas
    cout << "\nATIVOS ORDENADOS:" << endl;
    for (size_t i = 0; i < mediasOrdenadas.size(); i++) {
        cout << i + 1 << ". " << mediasOrdenadas[i].nome_ativo
             << ": " << mediasOrdenadas[i].ultima_media << endl;
    }

    // 4. DEPOIS: Análise de variação de CADA ativo
    cout << "\nVARIAÇÃO:" << endl;
    for (size_t i = 0; i < ativos.size(); i++) {
        ativos[i].analisar_ultima_media();  // Exibe última + variação
    }
}
//função que lista todos os ativos
void SistemaFinanceiro::listar_ativos() {
    if (ativos.size() == 0) {
        cout << "\nNenhum ativo cadastrado!" << endl;
        return;
    }

    cout << "\n<---- ATIVOS CADASTRADOS ---->\n";
    for (size_t i = 0; i < ativos.size(); i++) {
        cout << "\nAtivo " << i + 1 << ":\n";
        ativos[i].exibirRelatorio();
    }
}