#include <string>
#include <vector>
#include "registro_valor.h"

using namespace std;

struct Media {
    string nome_ativo;
    double ultima_media;
};
struct AnaliseMedia {
    string nome_ativo;
    double maior_variacao;
    bool tem_anormal;
};

 // Nova função

class Ativo {

    public:
        Ativo(string nome);
        string getNome();
        void adicionarRegistro(RegistroValor r);
        vector<Media> media_movel();
        vector<Media> ordena_media(vector<Media> media);
        void exibirRelatorio();
        vector<AnaliseMedia> analisar_ultima_media();

    private:
        string nomeAtivo;
        vector<RegistroValor> registros;
};

