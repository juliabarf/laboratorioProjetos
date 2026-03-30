//
// Created by julia on 28/03/2026.
//

#include <string>
#include <iostream>
using namespace std;

string printCoordenadas();



class Ponto {
    public:
        Ponto(int, int, int);
        void setPontoX(int);
        void setPontoY(int);
        void setPontoZ(int);

        int getPontoX();
        int getPontoY();
        int getPontoZ();

    private:
        int x, y,z;

};

class Linha {
    public:
        Linha(int, int);
        void setP1();
        void setP2();
        int getComprimento();

    private:
        Ponto p1, p2;

};



