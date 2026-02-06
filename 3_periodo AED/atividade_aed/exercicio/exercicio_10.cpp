#include <iostream>
#include <cstring>
using namespace std;

struct ContaBancaria{
    char nometitular[51];
    int numeroconta;
    float saldo;
};

float depositarValor(ContaBancaria& cb){
    float adicionar = 0;
    
    cout << "Qual valor voce deseja adicionar?" << endl;
    cin >> adicionar;
    
    cb.saldo += adicionar;
    cout << adicionar << " foi adicionado ao saldo!" << endl;
    return cb.saldo;
}

float sacarValor(ContaBancaria& cb){
    float sacar = 0;
    
    cout << "Qual valor voce deseja sacar?" << endl;
    cin >> sacar;
    
    if (sacar <= cb.saldo){
        cb.saldo -= sacar;
        cout << sacar << " foi retirado do saldo!" << endl;
        return cb.saldo;
    }
    else{
        cout << "Valor indisponivel no saldo!" << endl;
        return cb.saldo;
    }
}

void exibirSaldo(ContaBancaria cb){
    cout << "O saldo disponivel e: R$" << cb.saldo << endl;
}

int main()
{
    ContaBancaria contaigor;
    strcpy(contaigor.nometitular, "igorrr");
    contaigor.numeroconta = 123;
    contaigor.saldo = 1.23;
    
    int opcao = 0;
    
    while (opcao != 4){
        
        cout << "Menu de opcoes" << endl;
        cout << "1- Exibir Saldo" << endl;
        cout << "2- Depositar Valor" << endl;
        cout << "3- Sacar Valor" << endl;
        cout << "4- Encerrar Programa" << endl;
        
        cin >> opcao;
        
        switch(opcao){
            case 1:
            exibirSaldo(contaigor);
            break;
            
            case 2:
            depositarValor(contaigor);
            break;
            
            case 3:
            sacarValor(contaigor);
            break;
            
            case 4:
            cout << "Programa encerrado." << endl;
            break;
            
            default:
            cout << "Opcao invalida!" << endl;
            break;
        }
    }
    return 0;
}
