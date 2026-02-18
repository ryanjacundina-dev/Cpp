#include <iostream>
#include <string>
#include <utility>
using namespace std;
int main(){
    pair<int, string> aluno;
    aluno.first = 16;
    aluno.second = "Ryan";
    cout << "Aluno " << aluno.second << " tem " << aluno.first << " anos!" << endl;
    return 0;
}