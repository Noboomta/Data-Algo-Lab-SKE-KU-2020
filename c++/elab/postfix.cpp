//
// Created by NoBoomTa on 9/19/2020.
//

#include <iostream>
#include <stack>
#include <sstream>
#include <iomanip>

using namespace std;

//struct Stack{
//
//};

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
    return true;
}

int main(){
    stack<float> operand;
    string a;
    while (true){
        cin >> a;
        if(isNumber(a)){
            float n = stoi(a);
            operand.push(n);
        }
        else if(a=="="){
            break;
        }
        else{
            float front,back;
            back = operand.top();
            operand.pop();
            front = operand.top();
            operand.pop();
            if(a=="+"){
                operand.push(front+back);
            }
            else if(a=="-"){
                operand.push(front-back);
            }
            else if(a=="*"){
                operand.push(front*back);
            }
            else if(a=="/"){
                operand.push(front/back);
            }
        }
    }
    float ans = operand.top();
//    cout << setprecision (4) << fixed << ans;
    std::printf("%.4f", ans);
}