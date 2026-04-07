// Laboratório 2: questão b
// Disciplina: Linguagens de programação
// Data: 04/2026
// Código que retorna a distância de dois pontos.
// Autora: Júlia Barbosa

#include <string>
#include <iostream>
using namespace std;

class Ponto {
    public:
        Ponto(double = 2, double = 2, double = 2); // valor padrão pra caso o usuario não coloque valor

        // atualiza as coordenadas
        void setPontoX(double);
        void setPontoY(double);
        void setPontoZ(double);

        // retorna as variáveis
        double getPontoX();
        double getPontoY();
        double getPontoZ();

    private:
        int x, y, z; // variaveis para armazenar os valores das coordenadas

};

void printCoordenadas(Ponto p); //exibe as coordenadas fornecidas ou o valor padrão da coordenada

class Linha {
    public:
        Linha(Ponto, Ponto); // armazena as coordenadas dos dois pontos
        void setP1(Ponto);
        void setP2(Ponto);
        double getComprimento(); // calcula o comprimento entre os dois pontos

    private:
        Ponto p1, p2;

};



