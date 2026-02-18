#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
void print_list(string list[], int size){
    for(int i = 0; i < size; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}
int main(){
    string list[5] = {"b", "a", "c", "e", "d"};
    print_list(list, 5);
    sort(list, list + 5);
    print_list(list, 5);
    sort(list, list + 5, greater<string>());
    print_list(list, 5);
    return 0;
}