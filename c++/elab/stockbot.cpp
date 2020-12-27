//
// Created by NoBoomTa on 9/24/2020.
//

#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,k;
    cin >> n >> k;
    bool buy = true;
    int a[n];
    int ans = 0;
    int b,s;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(buy && i!=0 && (a[i] - a[i-1] >= k)){
            buy = false;
            b = a[i];
        }else if(!buy && i!=0 && (a[i-1] - a[i]>= k)){
            buy = true;
            s = a[i];
            ans += s-b;
        }else{
            continue;
        }
    }
    cout << ans <<endl;
    return 0;
}