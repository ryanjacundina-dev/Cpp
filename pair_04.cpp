#include <iostream>
#include <utility>
using namespace std;
int main(){
    pair<int, int> xy[2];
    xy[0] = {1, 2};
    xy[1] = {3, 4};
    for(int i = 0; i < 2; i++){
        cout << "xy[" << i << "] = " << xy[i].first << ", " << xy[i].second << endl;
    }
    return 0;
}