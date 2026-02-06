#include <iostream>
using namespace std;

int somaSucessiva(int numero, int vezes){
    int temp = numero;
    while (vezes > 1){
        numero += temp;
        vezes -= 1;
    }
    return numero;
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