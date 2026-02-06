//3. Inserção Ordenada na Lista Encadeada
//Altere a implementação da lista encadeada para que os elementos sejam inseridos em ordem crescente automaticamente.

#include <iostream>
#include <cstdlib>
using namespace std;

struct No{
    int valor;
    struct No* prox;
};

No* inserirCrescente(int valor, No* head){
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (head == NULL || novo->valor < head->valor){ //checa se o que ele ta vendo não é o inicio da lista, pra atualizar o head
        novo->prox = head;
        return novo;
    }

    No* atual = head;
    while (atual->prox != NULL && valor > atual->prox->valor){
        atual = atual->prox;
    }
    novo->prox = atual->prox;
    atual->prox = novo;

    return head;
}

No* removerElemento(int valor, No* head){
    No* atual = head;
    

    if (head == NULL){ //funcao vazia
        return NULL;
    }

    if (head->valor == valor){ //apagar o primeiro ou seja o head (tem q apontar pro segundo)
        No* temp = head;
        head = head->prox;
        free (temp); //ele usa o temp pra dar free, pq o que apontava pra o que eu quero remover nao aponta mais, ou seja ele estaria perdido na memoria, mas o temp aponta pra onde ele estar, o temp é só pra guardar o lugar dele até eu mudar o head->prox pra o depois dele
        return head;
    }

    while (atual->prox != NULL && atual->prox->valor != valor){ //prox != null pra o ultimo da fila, e prox diferente de valor pq eu tenho que estar um antes pra salvar a posição do que eu vou apagar
        atual = atual->prox;
    }
    
    if (atual->prox != NULL){ //chegou na que eu quero, eu to um antes, no atual, o atual->prox é a que eu quero remover
        No* temp = atual->prox;
        atual->prox = atual->prox->prox;
        free(temp); //ele usa o temp pra dar free, pq o que apontava pra o que eu quero remover nao aponta mais, ou seja ele estaria perdido na memoria, mas o temp aponta pra onde ele estar, o temp é só pra guardar o lugar dele até eu mudar o atual->prox pra o depois dele
    }

    return head;
}

void imprimirLista(No* head){
    No* atual = head;
    while (atual != NULL){  //percorrer
        cout << atual->valor << " -> ";
        atual = atual->prox;
    }
    cout << "NULL" << endl;
}

void contarElementos(No* head){
    No* atual = head;
    int i = 0;
    if (head == NULL){
        cout << "A lista possui 0 elementos";
    }
    while (atual != NULL){
        atual = atual->prox;
        i++;
    }
    cout << "A lista possui " << i << " elementos!";
}


int main(){
    No* head = NULL;

    head = inserirCrescente(10, head);
    head = inserirCrescente(35, head);
    head = inserirCrescente(20, head);
    head = inserirCrescente(8, head);

    imprimirLista(head);

    return 0;
}