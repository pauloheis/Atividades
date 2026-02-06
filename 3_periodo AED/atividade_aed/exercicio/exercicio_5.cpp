#include <iostream>
using namespace std;

struct Funcionario{
    char nome[51];
    char cargo[31];
    float salario;
};

int main(){
    int n;
    cout << "Quantos funcionarios serao cadastrados?" << endl;
    cin >> n;

    Funcionario* funcionario = new Funcionario[n];

    for (int i=0; i< n; i++){
        cout << "Insira o nome do funcionario: ";
        cin >> funcionario[i].nome;

        cout << "Insira o cargo do funcionario: ";
        cin >> funcionario[i].cargo;

        cout << "Insira o salario do funcionario: ";
        cin >> funcionario[i].salario;
    }

    for (int i=0; i< n; i++){
        cout << "Nome do funcionario: " << funcionario[i].nome << endl;
        cout << "Cargo do funcionario: " << funcionario[i].cargo << endl;
        cout << "Salario do funcionario: " << funcionario[i].salario << endl;
    } 
    delete[] funcionario;
    
    return 0
}