#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Produto {
    string categoria;
    string nome;
    float valor;
    void exibir_info(){
        cout << categoria << endl << nome << endl << "R$ " << fixed << setprecision(2) << valor;
    }
};
int main (){
    Produto x = {"Alimento", "Beterraba", 20};
    x.exibir_info();
    return 0;
}