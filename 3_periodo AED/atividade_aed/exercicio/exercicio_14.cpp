#include <iostream>
using namespace std;

int somaSucessiva(int numero, int vezes){
    if (vezes == 0){
        return 0;
    }
    return numero + somaSucessiva(numero, vezes - 1);
}

int main(){
    int numero, vezes;

    cout << "Insira o numero a ser multiplicado: " << endl;
    cin >> numero;

    cout << "Insira quantas vezes ele sera multiplicado: ";
    cin >> vezes;

    cout << somaSucessiva(numero, vezes);
    
    return 0;
}