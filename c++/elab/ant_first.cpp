#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    int a[n];
    bool c = true;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(!c){
            c = true;
        }else if(a[i] >= 1000){
            ans += 1000;
            c = false;
        }else{
            ans += a[i];
            c = true;
        }
    }
    cout << ans;
    return 0;
}