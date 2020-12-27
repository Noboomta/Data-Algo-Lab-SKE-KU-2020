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
        int st, stop;
        cin >> st >> stop;
        vect.push_back( make_pair(stop, st) );
    }
    sort(vect.begin(), vect.end());
    int all =0;
    if(!vect.empty()){
        int now_stop = vect[0].first;
        all++;
        for(int i=1; i<n; i++){
            if(vect[i].second >= now_stop){
                now_stop = vect[i].first;
                all++;
            }
        }
    }
    cout << all << endl;
}