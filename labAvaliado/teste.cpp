//
// Created by julia on 08/05/2026.
//

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

struct Medias {
    string nome;
    int media;
};

bool comparaMedia(Medias m1, Medias m2) {
    return m1.media < m2.media;
}

int main() {
    Medias lista[3]= {
        {"aluna1",23},
        {"aluno2",46},
        {"louise",12}
    };
    cout << lista[1].nome << endl;
    sort(lista, lista+3, comparaMedia);

    //imprime o resultado
    for (int i = 0; i < 3; i++) {
        cout << lista[i].nome << " " << lista[i].media << endl;
    }

    return 0;
}
