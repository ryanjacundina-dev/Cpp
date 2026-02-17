#include <iostream>
#include <string>
using namespace std;
struct Carro {
    string marca;
    string modelo;
    int ano;
};
Carro criar_carro(string marca, string modelo, int ano){
    Carro x;
    x.marca = marca;
    x.modelo = modelo;
    x.ano = ano;
    return x;
}
int main(){
    Carro carro1 = criar_carro("BMW", "XCross97", 2030);
    cout << "Lançamento: " << carro1.marca << " " << carro1.modelo << " " << carro1.ano;
    return 0;
}