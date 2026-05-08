#include "ativo.h"
#include <iostream>
using namespace std;

//contrutor que inicializa o nome ativo
Ativo::Ativo(string nome) {nomeAtivo = nome;}

//função que retorna o nome do ativo
string Ativo::getNome() {return nomeAtivo;}

//função que adiciona registros em um ativo novo
void Ativo::adicionarRegistro(RegistroValor r) {registros.push_back(r);}

//função que realiza a média móvel
double Ativo::media_movel() {

    cout<<"\nMédia móvel do ativo " << nomeAtivo << ": ";
    if (registros.size() < 3) {cout << "Dados insuficientes";return 0;}
    double media = 0;
    vector<double> medias;
    for (int i = 0; i <= registros.size() - 3; i++) {
        double soma = registros[i].get_valor() +registros[i + 1].get_valor() + registros[i + 2].get_valor();
        media = soma / 3;
        cout << media;
        if (i < registros.size() - 3) {cout << " ";}
    }
    medias.push_back(media);
    return media;
}

//função que exibe os registros dos ativos cadastrados
void Ativo::exibirRelatorio() {
    cout << "Ativo: "<< nomeAtivo << endl;
    for (int i = 0; i < registros.size(); i++) {
        cout << "nome: " << registros[i].get_nome()<< " | " <<"valor: "<< registros[i].get_valor() << endl;
    }
}



