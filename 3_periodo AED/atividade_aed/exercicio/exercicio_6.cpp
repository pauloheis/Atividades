#include <iostream>
using namespace std;

struct Livro {
    char titulo[51];  
    char autor[51];   
    int ano;          
};

void ExibirLivro (Livro* livros){
    int anopublicado;
    cout << "Quer acessar os livros publicados a partir de que ano?";
    cin >> anopublicado;

    cout << "Livros pulicados a partir de" << anopublicado << ":" << endl;

    for (int i = 0; i < 2; i++){
        if (livros[i].ano > anopublicado){
        cout << "Titulo:" << livros[i].titulo << endl;
        cout << "Autor:" << livros[i].autor << endl;
        cout << "ano:" << livros[i].ano << endl;
        }   
    }
}

int main(){

    Livro livrosc[2];

    cout << "Cadastre 2 livros: " << endl;

    for (int i = 0; i < 2; i++){
        cout << "Titulo do livro: ";
        cin >> livrosc[i].titulo;

        cout << "Autor do livro: ";
        cin >> livrosc[i].autor;

        cout << "Ano de publicacao: ";
        cin >> livrosc[i].ano;
    }

    cout << "Cadastro realizado" << endl;

    ExibirLivro(livrosc);
    return 0;
}