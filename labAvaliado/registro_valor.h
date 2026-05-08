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
