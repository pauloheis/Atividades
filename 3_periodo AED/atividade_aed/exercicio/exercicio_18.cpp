#include <iostream>

using namespace std;

int maiorElemento(int vetor[], int tamanho){
    int maior = vetor[0];

    for (int i = 0; i < tamanho; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int numero[5];

    cout << "Insira os elementos do vetor: " << endl;

    for(int i = 0; i < 5; i++){
        cin >> numero[i];
    }

    cout << "O maior elemento e: " << maiorElemento(numero, 5);

    return 0;

}