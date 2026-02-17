#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Produto {
    float valor;
    string categoria, nome;
    public:
    Produto(float valor, string categoria, string nome){
        this->valor = valor;
        this->categoria = categoria;
        this->nome = nome;
    }
    void exibir_info(){
        cout << this->categoria << endl << this->nome << endl << "R$ " << fixed << setprecision(2) << valor << endl;
    }
};
int main(){
    Produto x(13.95, "Alimentos", "Beterraba");
    x.exibir_info();
    return 0;
}