#include <iostream>
#include <utility>
using namespace std;
int main(){
    int x = 10, y = 15;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}