#include <iostream>
using namespace std;

int maiorElemento(int vet[], int n) {
    if (n == 1) {
        return vet[0];
    }
    int maior = maiorElemento(vet + 1, n - 1);

    if (vet[0] > maior){
        return vet[0];
    }
    else{
        return maior;
    }
}

int main() {
    int vet[] = {1, 3, 7, 2, 5};
    int n = sizeof(vet) / sizeof(vet[0]);
    
    cout << "O maior elemento é: " << maiorElemento(vet, n) << endl;

    return 0;
}
