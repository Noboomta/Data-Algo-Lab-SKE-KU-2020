//
// Created by NoBoomTa on 12/24/2020.
//

#include <iostream>
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
//    char student_code[n][3];
    vector<string> student_code;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        student_code.push_back(a);
    }
//    for(int i=0;i<n;i++){
//        cout << student_code[i] << endl;
//    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if (student_code[i][0] == student_code[j][0]){
                ans++;
            }
            else if (student_code[i][1] == student_code[j][1]){
                ans++;
            }else if (student_code[i][2] == student_code[j][2]){
                ans++;
            }
        }
    }
    cout << ans;
}
