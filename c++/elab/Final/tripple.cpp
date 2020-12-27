//
// Created by NoBoomTa on 12/15/2020.
//

#include <iostream>
#include "queue"
#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    vector<int> vect;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        vect.push_back(num);
    }
    sort(vect.begin(), vect.end());
    int temp = vect[0];
    int all_temp = 1;
    int ans = 0;
    for(int i=1;i<n;i++){
//        cout << vect[i];
        if(vect[i] == temp){
            all_temp++;
            if(all_temp == 3){
                ans++;
            }
        }
        else{
            all_temp = 1;
            temp = vect[i];
        }
    }
    cout << ans;
}