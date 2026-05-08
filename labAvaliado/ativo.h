//
// Created by julia on 04/05/2026.
//

#include <string>
#include <vector>
#include "registro_valor.h"

class Ativo {
    public:
        Ativo(string nome);
        void adicionarRegistro(RegistroValor r);
        void exibirRelatorio();
        double media_movel();
        string getNome();

    private:
        string nomeAtivo;
        vector<RegistroValor> registros;


};
