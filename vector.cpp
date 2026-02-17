#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, maior;
    cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    maior = v[0];
    for(int i = 0; i < N; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    cout << maior;
    return 0;
}