//
// Created by NoBoomTa on 12/15/2020.
//


#include <iostream>
using namespace std;

char words[1000][12];
//char words[100][5];

//string words[1000];
void read(int n){
    for(int i=0;i<n; i++){
        cin >> words[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int l, data, ques;
    cin >> l >> data >> ques;
    read(data);
    string temp;
    string thisw;
    string tempc;
    string thiswc;
    for(int i=0;i<data; i++){
        for
    }
    for(int q=0;q<ques;q++){
        string qu1, qu2;
        cin >> qu1 >> qu2;
        temp = qu1;
        int hh = 0;
        for(int i=0;i<data;i++){
            hh++;
            thisw = words[i];
            tempc = temp.substr(1,l);
            thiswc = thisw.substr(0,l-1);
            if(tempc == thiswc){
                hh = 0;
                temp = thisw;
                if(temp == qu2){
                    cout << "yes" << endl;
                    break;
                }
                i=0;
            }
            else if(i == data-1){
                i=-1;
            }
            if(hh > data+1){
                cout << "no" << endl;
                break;
            }
        }
    }
//    cout << (sizeof(words) + sizeof(data) + sizeof(ques) + sizeof(temp)) + sizeof(tempc) + sizeof(thiswc) + sizeof(int) / 1048576.0;
}