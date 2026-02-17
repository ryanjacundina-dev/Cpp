#include <iostream>
#include <string>
using namespace std;
int main(){
    int num_of_questions, hits = 0;
    string test_tpt, opts_slct_by_candidate;
    cin >> num_of_questions >> test_tpt >> opts_slct_by_candidate;
    for(int i = 0; i < num_of_questions; i++){
        if(test_tpt[i] == opts_slct_by_candidate[i]){
            hits++;
        }
    }
    cout << hits;
    return 0;
}