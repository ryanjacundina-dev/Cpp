#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
int main(){
    vector<char> res;
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        stack<char> char_case;
        string sentence;
        cin >> sentence;
        int status = 1;
        for(int i = 0; i < sentence.size(); i++){
            char letter = sentence[i];
            if(letter == '{' || letter == '[' || letter == '('){
                char_case.push(letter);
            }else if(char_case.size() > 0){
                switch(char_case.top()){
                    case '{':
                        if(letter == '}'){
                            char_case.pop();
                        }
                        break;
                    case '(':
                        if(letter == ')'){
                            char_case.pop();
                        }
                        break;
                    case '[':
                        if(letter == ']'){
                            char_case.pop();
                        }
                        break;
                    default:
                        status = 0;
                        break;
                }
            }else{
                status = 0;
            }
        }
        if(status == 1 && char_case.size() == 0){
            res.push_back('S');
        }else{
            res.push_back('N');
        }
    }
    for(char result : res){
        cout << result << endl;
    }
    return 0;
}