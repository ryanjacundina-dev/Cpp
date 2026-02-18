#include <iostream>
#include <string>
#include <utility>
using namespace std;
int main (){
    pair<string, int> aluno = {"Ryan", 16};
    cout << "Aluno " << aluno.first << " tem " << aluno.second << " anos!" << endl;
    return 0;
}