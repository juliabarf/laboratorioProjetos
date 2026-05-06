//
// Created by julia on 02/05/2026.
//

#include <string>
using namespace std;

class RegistroValor {
    public:
        RegistroValor(string n ,double preco);
        double get_valor();
        string get_nome();
    private:
        string nomeIndicador;
        double valor;

};
