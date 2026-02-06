#include <iostream>

typedef struct Pessoa
{
    char Nome[51];
    int Idade;
    float Altura;
}Pessoa;

int main(){
    Pessoa Carlos;
    std::cin >> Carlos.Nome;
    std::cin >> Carlos.Idade;
    std::cin >> Carlos.Altura;
    
    std::cout << Carlos.Nome << " ";
    std::cout << Carlos.Idade << " ";
    std::cout << Carlos.Altura << " ";
    
    return 0;
   }