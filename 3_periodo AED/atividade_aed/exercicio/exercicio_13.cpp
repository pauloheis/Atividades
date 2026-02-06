#include <iostream>
using namespace std;

int somaDigito(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaDigito(n / 10);
}

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    
    cout << "A soma dos dígitos é: " << somaDigito(numero) << endl;

    return 0;
}
