//
// Created by NoBoomTa on 9/23/2020.
//
#include <iostream>
using namespace std;
void show_block(int a[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<=i;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int all;
    cin >> all;
    int b[all][9][9] = {0};
    for(int round = 0; round<all;round++) {
        int a[9][9] = {0};
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j <= i; j++) {
                int num;
                cin >> num;
                a[i * 2][j * 2] = num;
            }
        }
        for(int i=8;i>0;i--){
            if(i%2==0){
                for(int j=0;j<=i-2;j+=2){
                    a[i][j+1] = (a[i-2][j] - (a[i][j]+a[i][j+2]))/2;
                }
            }
            else{
                for(int j=0;j<=i;j++){
                    a[i][j]=a[i+1][j] + a[i+1][j+1];
                }
            }
        }
        for(int i=0;i<9;i++){
            for(int j=0;j<=i;j++){
                b[round][i][j] = a[i][j];
            }
        }
        //show_block(a);
    }
    for (int i=0;i<all;i++){
        show_block(b[i]);
    }
    return 0;
}