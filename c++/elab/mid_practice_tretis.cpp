#include <iostream>

using namespace std;

int a[10];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char op;
        int x;
        cin >> op >> x;
        x--;
        if(op == '-'){
            int mx = a[x];
            for(int j=0;j<4;j++){
                if(a[j+x] > mx){
                    mx = a[j+x];
                }
            }
            for(int j=0;j<4;j++){
                a[j+x] = mx + 1;
            }
        }else if(op == 'o'){
            int mx = a[x];
            for(int j=0;j<2;j++){
                if(a[j+x] > mx){
                    mx = a[j+x];
                }
            }
            for(int j=0;j<2;j++){
                a[j+x] = mx + 2;
            }
        }else if(op == 'i'){
            a[x] += 4;
        }

    }
    int mx = a[0];
    for(int i=0;i<10;i++){
        if(a[i] > mx){
            mx = a[i];
        }
    }
    cout << mx <<endl;
return 0;
}
