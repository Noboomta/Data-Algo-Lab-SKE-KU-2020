//
// Created by NoBoomTa on 12/26/2020.
//

#include "iostream"
#include "vector"
#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    vector< pair <int,int> > vect;
    for(int op = 0; op<n; op++){
        int D, use;
        cin >> D >> use;
        vect.push_back( make_pair(D, use) );
    }
    sort(vect.begin(), vect.end());

    int pay =0;
    int time_now=0;

    for(int i=0;i<vect.size(); i++){

        time_now += vect[i].second;
        if(time_now - vect[i].first > 10){
            if(pay < (time_now - vect[i].first - 10) * 10000){
                pay = (time_now - vect[i].first - 10) * 10000;
            }
        }
    }
    cout << pay;
}