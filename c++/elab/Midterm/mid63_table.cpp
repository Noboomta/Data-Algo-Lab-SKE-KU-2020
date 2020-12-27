//
// Created by NoBoomTa on 10/22/2020.
//

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    int arr[2*n];
    int ars = 0;
    int table[n+1][n+1];
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            cin >> table[i][j];
            sum += table[i][j];
        }
        table[i][n] = sum;
        arr[ars++] = sum;
    }
    for(int k=0; k<n; k++){
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += table[i][k];
        }
        table[n][k] = sum;
        arr[ars++] = sum;
    }
    int wrong;
    int correct;
    for(int i=2*n-1; i>0; i--){
        if(arr[i] == arr[i-1] && arr[i-1] != arr[i-2]){
            wrong = arr[i-2];
            correct = arr[i];
            break;
        }
    }
    bool first = true;
    int first_lo = 0;
    int sec_lo = 0;
    for(int i=0; i<2*n; i++){
        if(arr[i] == wrong && first == true){
            first_lo = i;
            first = false;
        } else if(arr[i] == wrong && first == false){
            sec_lo = i;
        }
    }
//    cout << correct << "T F" << wrong << endl;
//    cout << first_lo << "F S" << sec_lo << endl;
    cout << table[first_lo][sec_lo-n];
}
