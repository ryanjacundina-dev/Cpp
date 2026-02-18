#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;
int main(){
    vector<int> lista({3, 5, 100});
    int num;
    char res;
    while(1 == 1){
        cout << "Do you want to add a number to \"lista\"? <y> Yes <n> No: ";
        cin >> res;
        res = tolower(res);
        if(res == 'y'){
            cout << "Put an integer number: ";
            cin >> num;
            lista.push_back(num);
        }else{
            break;
        }
    }
    for(int i = 0; i < lista.size(); i++){
        cout << lista[i] << endl;
    }
    return 0;
}