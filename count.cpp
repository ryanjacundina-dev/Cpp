#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int v[10] = {0,0,2,3,5,0,9,0,0,0}, num;
    cout << "List: ";
    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }
    cout << endl << "Choose a number: ";
    cin >> num;
    cout << "The number " << num << " appear " << count(v, v + 10, num) << "x in the list!";
    return 0;
}