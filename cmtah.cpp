#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x;
    cout << "Enter a decimal number: ";
    cin >> x;
    cout << "Floor: " << floor(x) << endl;
    cout << "Ceil: " << ceil(x) << endl;
    return 0;
}