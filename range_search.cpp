#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int lista[] = {1,2,4,4,5,6,7};
    int *pos = find(lista, lista + 7, 9);
    cout << pos << " " << lista + 7 << " " << pos - lista;
    return 0;
}