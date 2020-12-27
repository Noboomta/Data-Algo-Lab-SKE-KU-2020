//
// Created by NoBoomTa on 11/24/2020.
//

#include <iostream>
#include <stack>
#include<vector>
using namespace std;
int main(){
//    ios_base::sync_with_stdio(false); cin.tie(0);
    stack<string> stk;
    vector<string> ans;
    int op;
    cin >> op;
    for(int i=0; i<op; i++){
        string op_now;
        cin >> op_now;
        if(op_now == "Sleep"){
            string name;
            cin >> name;
            stk.push(name);
        }
        else if(op_now == "Kick"){
            if(!stk.empty()){
                stk.pop();
            }
        }
        else if(op_now == "Test") {
            if(stk.empty()){
                cout << "Not in a dream" << endl;
//                ans.push_back("Not in a dream");
            }
            else{
                cout << stk.top() << endl;
//                ans.push_back(stk.top());
            }
        }
    }
//    for (auto ansl: ans){
//        cout << ansl << endl;
//    }
}