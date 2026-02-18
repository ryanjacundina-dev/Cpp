#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
#include <functional>
using namespace std;
int main(){
    int total_drivers, score;
    string nome;
    cin >> total_drivers;
    pair<int, string> drivers[total_drivers];
    for(int i = 0; i < total_drivers; i++){
        cin >> nome >> score;
        drivers[i] = {score, nome};
    }
    sort(drivers, drivers + total_drivers, greater<pair<int, string>>());
    for(int i = 0; i < total_drivers; i++){
        cout << drivers[i].second /*<< " " << drivers[i].first*/ << endl;
    }
    return 0;
}