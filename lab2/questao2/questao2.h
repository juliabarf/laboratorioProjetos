//
// Created by julia on 28/03/2026.
//

#ifndef LABORATORIOPROJETOS_QUESTAO2_H
#define LABORATORIOPROJETOS_QUESTAO2_H

string printCoordenadas();

class Linha {
    public:
        Linha(int, int);
        void setLinha();
        int getComprimento();
};

class Ponto {
    public:
        Ponto(int, int, int);
        void setPonto();
        void getPonto();
};



#endif //LABORATORIOPROJETOS_QUESTAO2_H
