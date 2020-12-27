#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    string def = "yes";
    string str;
    cin >> str;
    for(int i=0;i<str.length()/2+1;i++){
        if(str[i] != str[str.length()-1-i]){
            def = "no";
        }
    }
    cout << def;
}
