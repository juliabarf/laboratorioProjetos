#include "ativo.h"
#include <vector>

class SistemaFinanceiro {
    public:
        void inserir_ativo(Ativo a);
        string localiza_ativo(string nome);
        void adicionar_registro(string nome, RegistroValor r);
        void exibir_media();
        void listar_ativos();
    private:
        vector<Ativo> ativos;
};
