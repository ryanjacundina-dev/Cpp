#include <iostream>
using namespace std;
int main(){
    int v[10], w[10], x, n = 0;
    for(int i = 0; i < 10; i++){
        cin >> v[i];
    }
    cin >> x;
    for(int i = 0; i < 10; i++){
        int num = v[i];
        if(num == x){
            n++;
            w[n - 1] = i;
        }
    }
    if(n != 0){
        cout << n << endl;
        for(int i = 0; i < n; i++){
            cout << w[i] << " ";
        }
    }else{
        cout << "Mia x";
    }
    return 0;
}