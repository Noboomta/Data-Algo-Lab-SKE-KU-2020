//
// Created by NoBoomTa on 12/26/2020.
//

#include "iostream"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tower, n;
    cin >> tower >> n;
    bool arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = false;
    }
    for(int work=0; work<tower; work++) {
        int locate, tall;
        cin >> locate >> tall;
        for(int i=0; i<tall+1; i++){
            arr[locate+i] = true;
        }
    }
    int shadow = 0;
    for(int i = 0; i < n; i++){
//        cout << arr[i] << endl;
        if(arr[i] == true){
            shadow++;
        }
    }
    cout << shadow;
}