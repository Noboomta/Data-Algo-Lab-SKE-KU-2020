//
// Created by NoBoomTa on 11/24/2020.
//

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ios_base::sync_with_stdio(false); cout.tie(0);
    vector<int> bst;
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int k;
        cin >> k;
        if( k == 1 ){
            int new_key;
            cin >> new_key;
            bst.push_back(new_key);
        }
        else{
            int find_key;
            cin >> find_key;
            if (count(bst.begin(), bst.end(), find_key)){
                cout << "1" << endl;
            }
            else{
                cout << "0" << endl;
            }
        }
    }
}