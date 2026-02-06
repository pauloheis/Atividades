#include <iostream>
using namespace std;

struct Produto{
    char Nome[31];
    int Codigo;
    float Preco;
};

void ExibirProduto(Produto p){
    cout << p.Nome << endl;
    cout << p.Codigo << endl;
    cout << p.Preco << endl;
}

int main (){
    Produto produto;

    cout << "insira o nome do produto: ";
    cin >> produto.Nome;

    cout << "insira o codigo do produto: ";
    cin >> produto.Codigo; 

    cout << "insira o preco do produto: ";
    cin >> produto.Preco;

    ExibirProduto(produto);
    return 0;
}
