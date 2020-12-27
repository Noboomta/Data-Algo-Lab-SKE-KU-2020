//
// Created by NoBoomTa on 9/24/2020.
//

#include <iostream>
using namespace std;
int main(){
    int input;
    for(int i=0;i<10;i++){
        cin >> input;
        if(!cin.eof()){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }
    cout << input;
}
