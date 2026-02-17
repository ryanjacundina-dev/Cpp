#include <iostream>
#include <string>
using namespace std;
struct Paciente {
    string nome;
    int idade;
    int numero;
};
int main(){
    Paciente x = {"John", 52, 0003};
    cout << "Paciente numero " << x.numero << ": " << x.nome << ", " << x.idade << " anos.";
    return 0;
}