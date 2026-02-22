#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int find_greater(vector<int> v){
    sort(v.begin(), v.end());
    return v[v.size() - 1];
}
int main(){
    int width, height;
    cin >> width;
    vector<int> pesquisa(width);
    for(int i = 0; i < width; i++){
        cin >> pesquisa[i];
    }
    height = find_greater(pesquisa);
    int chart[height][width] = {};
    for(int i = 0; i < width; i++){
        for(int j = 0; j < pesquisa[i]; j++){
            chart[j][i] = 1;
        }
    }
    for(int i = height - 1; i >= 0; i--){
        for(int j = 0; j < width; j++){
            cout << chart[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}