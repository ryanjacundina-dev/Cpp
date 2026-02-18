#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;
int main(){
    string x = "jkdfshdhfg";
    cout << x << endl;
    sort(&x[0], &x[0] + x.size());
    cout << x << endl;
    return 0;
}