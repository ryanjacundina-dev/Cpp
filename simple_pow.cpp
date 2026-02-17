#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(4) << pow(x, y);
    return 0;
}