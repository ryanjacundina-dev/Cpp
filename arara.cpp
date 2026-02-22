#include <iostream>
using namespace std;
int main(){
    int N; //numero de araras
    int M; //numero de gaiolas
    int res; //f(x) = 5x - 4
    cin >> N >> M;
    res = 5*N - 4;
    if(M < res){
        cout << 'N';
    }else{
        cout << 'S';
    }
    return 0;
}