//
// Created by NoBoomTa on 10/22/2020.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N, K;
    cin >> N >> K;
    int sum=0;
    int arr[N];
    for(int i=0;i<N;i++){
        int ah,bh;
        cin >> ah >> bh;
        arr[i] = ah-bh;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    sum = 0;
    for(int i=0;i<N;i++){
        if(arr[i]>0){
            sum+=arr[i];
        }
        else if(arr[i]<0 && i<K){

        }
        else{
            sum+=arr[i];
        }
    }
    cout << sum;
}