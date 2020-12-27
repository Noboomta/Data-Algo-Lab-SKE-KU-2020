//
// Created by NoBoomTa on 12/15/2020.
//

#include <iostream>
#include "queue"
using namespace std;

queue<string> read(int n){
    queue<string> words;
    for(int i=0;i<n; i++){
        string tt;
        cin >> tt;
        words.push(tt);
    }
    return words;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    queue<string> words;
    queue<string> cpwords;
    int l, data, ques;
    cin >> l >> data >> ques;
    words = read(data);
    for(int i=0;i<ques;i++){
        string qu1, qu2;
        cin >> qu1 >> qu2;
        cpwords = words;
        string now = qu1;
        int h=0;
        while (!cpwords.empty()){
            h++;
//            cout << now << " " << cpwords.front() << endl;
            if(now.substr(1,l) == cpwords.front().substr(0,l-1)){
                if(cpwords.front() == qu2){
                    cout << "yes" << endl;
                    break;
                }
                now = cpwords.front();
                cpwords.pop();
                h=0;
            }
            else{
                int sg = cpwords.size();
                if(h > sg+2){
                    cout << "no" << endl;
                    break;
                }
                cpwords.push(cpwords.front());
                cpwords.pop();
            }
        }
    }
}