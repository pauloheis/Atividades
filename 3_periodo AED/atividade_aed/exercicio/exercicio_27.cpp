#include <iostream>
#include <stack>
using namespace std;

string inverterString(string str) {
    stack<char> pilha;
    for (char ch : str) {
        pilha.push(ch);
    }

    string invertida = "";
    while (!pilha.empty()) {
        invertida += pilha.top();
        pilha.pop();
    }

    return invertida;
}

int main() {
    string str;

    cout << "Digite a string: ";
    cin >> str;

    string resultado = inverterString(str);
    cout << "String invertida: " << resultado << endl;

    return 0;
}