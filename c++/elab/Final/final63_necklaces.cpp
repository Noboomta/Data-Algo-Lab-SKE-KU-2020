//
// Created by NoBoomTa on 12/15/2020.
//

#include <iostream>
#include "queue"
#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int all_l, opr;
    cin >> all_l >> opr;
    vector< pair <int,int> > vect;
    for(int op = 0; op<opr; op++){
        int st, stop;
        cin >> st >> stop;
        vect.push_back( make_pair(stop, st) );
    }
    sort(vect.begin(), vect.end());
    int all =0;
    if(!vect.empty()){
        int now_stop = vect[0].first;
        all++;
        for(int i=1; i<opr; i++){
            if(vect[i].second > now_stop){
                now_stop = vect[i].first;
                all++;
            }
        }
    }
    cout << all;
}