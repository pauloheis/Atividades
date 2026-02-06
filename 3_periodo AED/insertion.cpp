#include <iostream>
using namespace std;

void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i]; //chave e' o vetor da posicao i 
        int anterior = i - 1; 

        while (anterior >= 0 && vetor[anterior] > chave) { //
            vetor[anterior + 1] = vetor[anterior];
            anterior--;
        }

        vetor[anterior + 1] = chave;
    }
}

int main(){
    int vetor[] = {22, 11, 99, 88, 9};
    int tamanho = 5;

    insertionSort (vetor, tamanho);
    cout << vetor;
}
