#include <iostream>
using namespace std;

struct Carro{
    char modelo[31];
    int ano;
    float preco;
};

void ExibirCarro(Carro carro){
    cout << carro.modelo << endl;
    cout << carro.ano << endl;
    cout << carro.preco << endl;
}

int main(){
    Carro* Carro1 = (Carro*)malloc(sizeof(Carro));

    cout << "Insira o nome do carro: ";
    cin >> Carro1->modelo;

    cout << "Insira o ano do carro: ";
    cin >> Carro1->ano;

    cout << "Insira o preco do carro: ";
    cin >> Carro1->preco;

    ExibirCarro(*Carro1);
    free(Carro1);

    return 0;

}