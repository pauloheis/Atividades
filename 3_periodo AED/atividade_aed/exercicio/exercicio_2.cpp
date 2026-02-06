#include <iostream>
using namespace std;

struct Aluno{
    char Nome[51];
    int Matricula;
    float Nota;
};

int main (){
    Aluno alunos[5];
    float media = 0;

    cout << "Insira os dados dos 5 alunos:" << endl;
    for (int i= 0; i < 5; i++){

        cout << "Aluno " << i << ": ";
        cout << "Nome: ";
        cin >> alunos[i].Nome;

        cout << "Matricula: ";
        cin >> alunos[i].Matricula;

        cout << "Nota: ";
        cin >> alunos[i].Nota;

        media += alunos[i].Nota;
    }
    
    cout << "a media e: " << media/5.0;

    return 0;
}