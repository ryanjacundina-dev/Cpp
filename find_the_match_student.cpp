#include <iostream>
#include <utility>
#include <string>
using namespace std;
int main(){
    int num_of_student;
    string nome;
    int nota;
    cin >> num_of_student;
    pair<string, int> res1[num_of_student];
    pair<string, int> res2[num_of_student];
    pair<string, int> vencedor = {"", num_of_student + 1};
    for(int i = 0; i < num_of_student; i++){
        cin >> nome >> nota;
        res1[i] = {nome, nota};
    }
    for(int i = 0; i < num_of_student; i++){
        cin >> nome >> nota;
        res2[i] = {nome, nota};
    }
    for(int i = 0; i < num_of_student; i++){
        for(int j = 0; j < num_of_student; j++){
            if(res1[i].first == res2[j].first){
                if(res1[i].second == res2[j].second){
                    if(j < vencedor.second){
                        vencedor = {res1[i].first, j};
                    } 
                }
                break;
            }
        }
    }
    if(vencedor.first == ""){
        cout << "NONE";
    }else{
        cout << vencedor.first;
    }
    return 0;
}