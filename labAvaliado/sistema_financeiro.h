#include "ativo.h"
#include <vector>

class SistemaFinanceiro {
    public:
        void inserir_ativo(Ativo a);
        int  localiza_ativo(string nome);
    private:
        vector<Ativo> ativos;
};
