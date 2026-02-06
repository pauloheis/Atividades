#include <iostream>
using namespace std;

int contarDigitos(int n) {
    if (n < 10) {
        return 1;
    }
    return 1 + contarDigitos(n / 10);
}

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    
    cout << "O número tem " << contarDigitos(numero) << " dígitos." << endl;

    return 0;
}
