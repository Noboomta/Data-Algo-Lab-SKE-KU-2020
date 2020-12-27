#include <iostream>
#include <vector>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int i =0;
    int N,K;
    cin >> N >> K;
    vector<int> v(N);
    for(int i=1;i<=N;i++){
        v[i-1] = i;
    }
    while(v.size() > 1){
        i = ((i+K)-1)%v.size();
        v.erase(v.begin()+(i));
    }
    cout << v[0];

    return 0;
}