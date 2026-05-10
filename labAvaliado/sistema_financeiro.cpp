#include "sistema_financeiro.h"
#include <iostream>
using namespace std;
#include <algorithm>

bool compararMedia(Media a, Media b) {return a.ultima_media < b.ultima_media;}

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
    ativos[0].media_movel();
}

void SistemaFinanceiro::ordena_media() {
    if (ativos.size() == 0) {
        cout << "Nenhum ativo cadastrado!" << endl;
        return;
    }

    vector<Media> todasUltimasMedias;

    // 1. Coleta a ÚLTIMA média de CADA ativo
    for (size_t i = 0; i < ativos.size(); i++) {
        vector<Media> mediasAtivo = ativos[i].media_movel();
        if (mediasAtivo.size() > 0) {
            todasUltimasMedias.push_back(mediasAtivo[0]);
        }
    }

    // 2. Ordena as últimas médias
    vector<Media> mediasOrdenadas = ativos[0].ordena_media(todasUltimasMedias);

    // 3. Exibe resultado
    cout << "\n\n=== ÚLTIMAS MÉDIAS ORDENADAS (CRESCENTE) ===" << endl;
    for (size_t i = 0; i < mediasOrdenadas.size(); i++) {
        cout << i + 1 << ". "
             << mediasOrdenadas[i].nome_ativo
             << ": " << mediasOrdenadas[i].ultima_media << endl;
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

