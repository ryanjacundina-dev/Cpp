#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    float a, b;
    cin >> a >> b;
    cout << fixed << setprecision(4) << pow(a, b) << endl;
    return 0;
}