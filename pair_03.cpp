#include <iostream>
#include <string>
#include <utility>
using namespace std;
int main() {
    pair<string, int> aluno = make_pair("Ryan", 16);
    cout << "Aluno " << aluno.first << " tem " << aluno.second << " anos!" << endl;
    return 0;
}