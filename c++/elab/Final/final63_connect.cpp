//
// Created by NoBoomTa on 12/15/2020.
//

#include <iostream>
#include "vector"
#include<bits/stdc++.h>
using namespace std;

char words[1000][12];
//string words[1000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int l, data, ques;
    cin >> l >> data >> ques;
    for(int i=0;i<data; i++){
        cin >> words[i];
    }
//    cout << "done l1" << endl;
    for(int i=0;i<ques;i++){
        string qu1, qu2;
        cin >> qu1 >> qu2;
        string temp = qu1;
        int hh = 0;
//        cout << qu1 << " and " << qu2 << endl;
        for(int i=0;i<data;i++){
            hh++;
            string thisw = "";
            string lastw = temp.substr(1,l);
            for(int j=0;j<l;j++){
                thisw+=words[i][j];
            }
//            cout << thisw << " Tand " << temp << endl;
//            cout << thisw.substr(1,-1) << " and " << lastw << endl;
            cout << temp << " andd " << thisw << endl;
            string tempc = temp.substr(1,l);
            string thiswc = thisw.substr(0,l-1);
            cout << tempc << " and " << thiswc << endl;
            if(tempc == thiswc){
//                cout << words[i] << temp;
                cout << "yesssss" << endl;
                hh =0;
                temp = thisw;
                if(temp == qu2){
                    cout << "yes" << endl;
                    break;
                }
                i=0;
            }
            else if(i == data-1){
                i=-1;
                cout << "i=data-1" << endl;
            }
            else if(hh > data+1 ){
                cout << "no" << endl;
                break;
            }
            cout << endl;
        }
//        cout << qu1 << " and " << qu2;
    }
//    for(int i=0;i<data;i++){
//        cout << words[i];
//    }
}