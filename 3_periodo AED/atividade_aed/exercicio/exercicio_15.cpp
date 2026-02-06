#include <iostream>
using namespace std;

void contagemRegressiva(int numero){
    if (numero < 0){
        return;
    }
    cout << numero << " ";
    contagemRegressiva(numero - 1);
}

int main(){
    int numero;

    cout << "numero pra contar: ";
    cin >> numero;

    contagemRegressiva(numero);

    return 0;
}