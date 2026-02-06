#include <iostream>
using namespace std;


int somaDigitos(int numero){
    int soma = 0;

    while (numero > 0){
        soma = soma + numero % 10;
        numero = numero / 10;
    } 
    
    return soma;
}

int main(){
    int numero;
    cout << "Insira um numero: ";
    cin >> numero;

    cout << somaDigitos(numero);
    return 0;
}