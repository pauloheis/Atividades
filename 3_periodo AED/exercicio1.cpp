#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node{
    int valor;
    struct Node* esquerda;
    struct Node* direita;
};

Node* NovoNo(int valor){
    Node* node = (Node*)malloc(sizeof(Node));
    node->valor = valor;
    node->esquerda = NULL;
    node->direita = NULL;
    return node;
}

Node* Inserir(Node* raiz, int valor){
    if (raiz == NULL) return NovoNo(valor);
    if (valor < raiz->valor)
        raiz->esquerda = Inserir(raiz->esquerda, valor);
    if (valor > raiz->valor)
        raiz->direita = Inserir(raiz->direita, valor);
    return raiz;
}

void PrintarEmOrdem(Node* raiz){
    if (raiz != NULL){
        PrintarEmOrdem(raiz->esquerda);
        cout << raiz->valor << " ";
        PrintarEmOrdem(raiz->direita);
    }
}

Node* MenorValor(Node* raiz){
    while(raiz->esquerda != NULL){
        raiz = raiz->esquerda;
    }
    return raiz;
}

Node* Remover(Node* raiz, int valor){
    if (raiz == NULL) return raiz;
    if (valor < raiz->valor){
        raiz->esquerda = Remover(raiz->esquerda, valor);
    }
    else if (valor > raiz->valor){
        raiz->direita = Remover(raiz->direita, valor);
    }
    else{ //achou o bagulho
        if(raiz->esquerda == NULL){
            Node* temp = raiz->direita;
            free(raiz);
            return temp;
        }
        else if(raiz->direita == NULL){
            Node* temp = raiz->esquerda;
            free(raiz);
            return temp;
        }
        Node* temp = MenorValor(raiz->direita); //menorvalorraizdadireta
        raiz->valor = temp->valor;
        raiz->direita = Remover(raiz->direita, temp->valor);
    }
    return raiz;
}

Node* Buscar(Node* raiz, int valor){
    if (raiz == NULL || raiz->valor == valor)
        return raiz;
    if (valor < raiz->valor){
        return Buscar(raiz->esquerda, valor);
    }
    else{
        return Buscar(raiz->direita, valor);
    }
}

void PrintarBuscar(Node* raiz, int valor){
    Node* achou = Buscar(raiz, valor);
    if (achou == NULL){
        cout << valor << " Nao existe na arvore" << endl;
    }
    else{
        cout << valor << " Foi encontrado!" << endl;
    }
}




int main() {
    Node* raiz = NULL;
    int opcao, valor;

    while (true) {
        cout << "1-Inserir valor" << endl;
        cout << "2-Remover valor" << endl;
        cout << "3-Buscar valor" << endl;
        cout << "4-Exibir em ordem" << endl;
        cout << "5-Sair" << endl;
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite um valor para inserir: ";
                cin >> valor;
                raiz = Inserir(raiz, valor);
                break;
            case 2:
                cout << "Digite um valor para remover: ";
                cin >> valor;
                raiz = Remover(raiz, valor);
                break;
            case 3:
                cout << "Digite um valor para buscar: ";
                cin >> valor;
                PrintarBuscar(raiz, valor);
                break;
            case 4:
                cout << "Valores em ordem: ";
                PrintarEmOrdem(raiz);
                cout << endl;
                break;
            case 5:
                return 0;
        }
    }
}
