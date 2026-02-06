#include <iostream>
using namespace std;


void contagemRegressiva(int numero){
    if (numero < 0){
        return;
    }
    for (int i = 0; i < numero; i++){
        cout << numero - i << endl;
    }
}

int main(){
    int numero;

    cout << "numero pra contar: ";
    cin >> numero;

    contagemRegressiva(numero);

    return 0;
}