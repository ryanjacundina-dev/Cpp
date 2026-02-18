#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    double x = 56.454, y = 56.2123;
    cout << "The min and max of " << x << " and " << y << " are respectfully: " << min(y, x) << ", " << max(x, y) << endl;
    return 0;
}