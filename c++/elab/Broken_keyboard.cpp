//
// Created by NoBoomTa on 9/24/2020.
//

#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string input;
    while (true){
        getline(cin, input);

        string ans = "";
        string strinblock = "";
        bool inblock = false;

        for(char c: input){
            if(c == '['){
                inblock = true;
                ans = strinblock + ans;
                strinblock = "";
            }
            else if(c == ']'){
                inblock = false;
                ans = strinblock + ans;
                strinblock = "";
            }
            else if(inblock){
                strinblock += c;
            }
            else{
                ans += c;
            }
        }
        cout << ans << endl;

        if(cin.eof()){
            break;
        }
    }
}