#include <iostream>
#include <string>
using namespace std;

int palindromo(string palavra, int inicial, int final) {
    if (inicial >= final) {
        
        return 1;
    }
    if (palavra[inicial] == palavra[final]) {

        return palindromo(palavra, inicial + 1, final - 1);
    } else {

        return 0;
    }
}

int main() {
    string str;
    cout << "Digite uma string: ";
    cin >> str;

    int resultado = palindromo(str, 0, str.length() - 1);

    if (resultado == 1) {
        cout << str << " é um palíndromo!" << endl;
    } else {
        cout << str << " não é um palíndromo!" << endl;
    }

    return 0;
}
