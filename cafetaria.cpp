#include <iostream>
using namespace std;
char resposta(int A, int B, int C, int D){
    for(int i = 1; i * D < C; i++){
        int dose_cafe = i * D;
        int quantidade_de_leite = C - dose_cafe;
        if(quantidade_de_leite >= A && quantidade_de_leite <= B){
            return 'S';
        }
    }
    return 'N';
}
int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << resposta(A, B, C, D);
    return 0;
}