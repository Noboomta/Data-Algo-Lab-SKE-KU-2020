#include<iostream>
using namespace std;
int mark[2000000];
int main(){
    int N,M;
    cin >> N >> M;
    int A[N];
    for(int i=0; i < N ; i++){
        int b;
        cin >> b;
        A[i] = b;
    }
    for(int i = 0 ; i < N-1 ; i++){
        for(int j = i+1 ; j < N ; j++){
            mark[A[i]+A[j]] = 1;
        }
    }
    for(int i = 0 ; i < M ; i++){
        int q;
        cin >> q;
        if(mark[q]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
