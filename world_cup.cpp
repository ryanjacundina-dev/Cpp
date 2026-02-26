#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int main(){
    queue<char> times;
    for(char i = 'A'; i <= 'P'; i++){
        times.push(i);
    }
    while(times.size() > 1){
        int time1, time2;
        cin >> time1 >> time2;
        if(time1 > time2){
            char a = times.front();
            times.pop(); times.pop();
            times.push(a);
        }else{
            times.pop();
            char a = times.front();
            times.pop();
            times.push(a);
        }
    }
    cout << times.front();
    return 0;
}