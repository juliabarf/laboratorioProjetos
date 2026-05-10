#include "ativo.h"
#include <iostream>
#include <algorithm>

using namespace std;

// função de comparação para o sort

// construtor que inicializa o nome do ativo
Ativo::Ativo(string nome) {nomeAtivo = nome;}

// função que retorna o nome do ativo
string Ativo::getNome() {return nomeAtivo;}

// função que adiciona registros em um ativo
void Ativo::adicionarRegistro(RegistroValor r) {
    registros.push_back(r);
}

// função que realiza a média móvel (APENAS ÚLTIMA MÉDIA)
vector<Media> Ativo::media_movel() {
    vector<Media> mediaFinal;

    if (registros.size() < 3) {
        cout << "\nMédia móvel do ativo " << nomeAtivo << ": Dados insuficientes" << endl;
        return mediaFinal;
    }

    double ultimaMedia = 0;

    // Calcula TODAS as médias, mas guarda APENAS a ÚLTIMA
    cout << "\nmedia do ativo " << nomeAtivo << ": ";
    for (size_t i = 0; i <= registros.size() - 3; i++) {
        double soma = registros[i].get_valor() +
                     registros[i + 1].get_valor() +
                     registros[i + 2].get_valor();
        ultimaMedia = soma / 3.0;
        cout << ultimaMedia << " ";
        if (i < registros.size() - 3) {cout << " ";}
    }

    mediaFinal.push_back({nomeAtivo, ultimaMedia});
    return mediaFinal;
}

// função que ordena as ÚLTIMAS MÉDIAS dos ativos
vector<Media> Ativo::ordena_media(vector<Media> medias) {
    sort(medias.begin(), medias.end(), [](Media a, Media b) {
        return a.ultima_media < b.ultima_media;
    });
    return medias;
}

// função que exibe os registros dos ativos cadastrados
void Ativo::exibirRelatorio() {
    cout << "Ativo: " << nomeAtivo << endl;
    for (int i = 0; i < registros.size(); i++) {
        cout << "nome: "
             << registros[i].get_nome()
             << " | valor: "
             << registros[i].get_valor()
             << endl;
    }
}