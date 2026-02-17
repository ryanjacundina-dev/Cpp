#include <iostream>
#include <string>
using namespace std;
struct Aluno {
    int idade;
    string nome;
};
int main(){
    Aluno x;
    cin >> x.nome >> x.idade;
    cout << "Aluno " << x.nome << " tem " << x.idade << " anos!" << endl;
    return 0;
}