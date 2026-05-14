#include "ativo.h"
#include <iostream>
#include <algorithm>

using namespace std;

// função para verificar se há variação anormal
bool variacao_anormal(double variacao) {
    return (variacao > 10 || variacao < -10);
}

double calcula_maior_variacao(double variacao_atual, double variacao_maxima) {
    if (variacao_atual > variacao_maxima) {
        return variacao_atual;
    }
    if (variacao_atual < -variacao_maxima) {
        return -variacao_atual;
    }
    return variacao_maxima;
}

// construtor que inicializa o nome do ativo
Ativo::Ativo(string nome) {nomeAtivo = nome;}

// função que retorna o nome do ativo
string Ativo::getNome() {return nomeAtivo;}

// função que adiciona registros em um ativo
void Ativo::adicionarRegistro(RegistroValor r) {
    registros.push_back(r);
}

// opção 3: exibe todas as médias móveis dos ativos
vector<Media> Ativo::media_movel() {
    vector<Media> mediaFinal;

    if (registros.size() < 3) {
        cout << "\nMédia móvel do ativo " << nomeAtivo << ": Dados insuficientes" << endl;
        return mediaFinal;
    }

    cout << "\n Médias móveis " << nomeAtivo << ": ";
    for (size_t i = 0; i <= registros.size() - 3; i++) {
        double soma = registros[i].get_valor() + registros[i + 1].get_valor() + registros[i + 2].get_valor();
        double media = soma / 3.0;
        cout << media;
        if (i < registros.size() - 3) {cout << " ";}

        // salva apenas a última
        if (i == registros.size() - 3) {mediaFinal.push_back({nomeAtivo, media});}
    }
    cout << endl;
    return mediaFinal;
}

vector<AnaliseMedia> Ativo::analisa_media() {
    vector<AnaliseMedia> analiseFinal;

    if (registros.size() < 3) {
        cout << nomeAtivo << ": Dados insuficientes" << endl;
        return analiseFinal;
    }

    double media_anterior = 0;
    double ultimaMedia = 0;
    double variacao_maxima = 0;
    bool tem_anormal = false;

    // calcula todas as médias para análise
    for (size_t i = 0; i <= registros.size() - 3; i++) {
        double soma = registros[i].get_valor() + registros[i + 1].get_valor() + registros[i + 2].get_valor();

        double media_atual = soma / 3.0;
        ultimaMedia = media_atual;

        // analise de variação
        if (i > 0) {
            double variacao = (media_atual - media_anterior) / media_anterior * 100;
            variacao_maxima = calcula_maior_variacao(variacao, variacao_maxima);
            //cout << variacao << " "<< endl;
            //cout << "variação max: "<< variacao_maxima << endl;
            if (variacao_anormal(variacao)) {tem_anormal = true;}
        }
        media_anterior = media_atual;
    }

    // exibe o resultado
    cout << nomeAtivo <<" | Maior variação: " << variacao_maxima << "%";
    if (tem_anormal) {cout << " ANORMAL ";}
    else {cout << " NORMAL";}
    cout << endl;

    analiseFinal.push_back({nomeAtivo, variacao_maxima, tem_anormal});
    return analiseFinal;
}

// função que ordena as últimas médias do ativo
vector<Media> Ativo::ordena_media(vector<Media> medias) {
    sort(medias.begin(), medias.end(), [](Media a, Media b) {
        return a.ultima_media < b.ultima_media;
    });
    return medias;
}

// função que exibe os registros dos ativos cadastrados
void Ativo::exibirRelatorio() {
    cout << "Ativo: " << nomeAtivo << endl;
    for (size_t i = 0; i < registros.size(); i++) {
        cout << "nome: " << registros[i].get_nome()
             << " | valor: " << registros[i].get_valor()
             << endl;
    }
}