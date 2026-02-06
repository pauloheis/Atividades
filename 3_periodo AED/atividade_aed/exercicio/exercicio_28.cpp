#include <iostream>
#include <stack>
using namespace std;

string decimalParaBinario(int num) {
    stack<int> pilha;
    while (num > 0) {
        pilha.push(num % 2);
        num /= 2;
    }

    string binario = "";
    while (!pilha.empty()) {
        binario += to_string(pilha.top());
        pilha.pop();
    }

    return binario;
}

int main() {
    int numero;

    cout << "Digite um numero decimal: ";
    cin >> numero;

    string resultado = decimalParaBinario(numero);
    cout << "Numero em binario: " << resultado << endl;

    return 0;
}