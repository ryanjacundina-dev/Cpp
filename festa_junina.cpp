#include <iostream>
using namespace std;
int subs(int x, int y){
    if(x > y){
        return x - y;
    }
    return y - x;
}
int main(){
    int a, b, c, total;
    cin >> a >> b >> c;
    total = subs(a, b) + subs(b, c) + subs(a, c);
    cout << total;
    return 0;
}