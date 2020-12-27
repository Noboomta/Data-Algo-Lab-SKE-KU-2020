//
// Created by NoBoomTa on 12/26/2020.
//

#include <vector>
#include "iostream"
using namespace std;
int main(){
    int n, speed;
    int now=0, max=0;
    cin >> n >> speed;
    vector<int> ign;
    for (int i = 0;i<n;i++) {
        int a;
        cin >> a;
        ign.push_back(a);
    }
    bool last = false;
    for (int i=0;i<=ign[n-1];i++) {
        for (int j=0;j<n;j++) {
            if (i==ign[j]) {
                last = true;
            }
        }
        if (last) {
            now+=speed;
            last = false;
        } else if(now > 0){
            now--;
        }
        if (i==0 || now>max) {
            max = now;
        }
    }
    cout << max;
}