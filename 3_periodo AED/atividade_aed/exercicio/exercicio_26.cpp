#include <iostream>
#include <stack>
using namespace std;

bool verificarBalanceamento(string expressao) {
    stack<char> pilha;

    for (char ch : expressao) {
        if (ch == '(') {
            pilha.push(ch);
        } else if (ch == ')') {
            if (pilha.empty()) {
                return false;
            }
            pilha.pop();
        }
    }

    return pilha.empty();
}

int main() {
    string expressao;

    cout << "Digite a expressao: ";
    cin >> expressao;

    if (verificarBalanceamento(expressao)) {
        cout << "Expressoes balanceadas!" << endl;
    } else {
        cout << "Expressoes nao balanceadas!" << endl;
    }

    return 0;
}