#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main(){
    vector<pair<int, char>> vPC; //minutos em que cada gol foi marcado
    int P; //gols marcados por Paulo
    cin >> P;
    for(int i = 0; i < P; i++){
        int x;
        cin >> x;
        vPC.push_back({x, 'P'});
    }
    int C; //gols marcados por Camila
    cin >> C;
    for(int i = 0; i < C; i++){
        int x;
        cin >> x;
        vPC.push_back({x, 'C'});
    }
    sort(vPC.begin(), vPC.end());
    int counterP = 0, counterC = 0;
    cout << counterP << " " << counterC << endl;
    for(int i = 0; i < vPC.size(); i++){
        if(vPC[i].second == 'P'){
            counterP++;
        }else{
            counterC++;
        }
        cout << counterP << " " << counterC << endl;
    }
    return 0;
}