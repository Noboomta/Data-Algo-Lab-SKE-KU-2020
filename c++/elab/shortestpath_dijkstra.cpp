//
// Created by NoBoomTa on 1/14/2021.
//

#include "iostream"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int all_point, all_path;
    cin >> all_point >> all_path;
    int len[all_point+1][all_point+1];
    for(int i=0;i<all_point+1;i++){
        for(int j=0;j<all_point+1;j++){
            len[i][j] = 1000000;
        }
    }
    int a,b,far;
    for(int p=0;p<all_path;p++){
        cin >> a >> b >> far;
        len[a][b] = far;
    }
//    for(int i=1;i<=all_point;i++){
//        for(int j=1;j<=all_point;j++){
//            cout << len[i][j] << " ";
//        }
//        cout << endl;
//    }
    for(int i=1;i<all_point+1;i++){
        for(int j=1;j<all_point+1;j++){
            for(int k=1;k<all_point+1;k++){
//                cout << i << " " << j << " " << j << " " << len[j][k] << " " << len[j][i] << " " << len[i][k] << endl;
                if( len[j][k] > (len[j][i] + len[i][k]) ){
                    len[j][k] = (len[j][i] + len[i][k]);
//                    cout << "yes" << endl;
                }
            }
        }
    }
//    cout << endl;
    int start,end;
    cout << "want" << endl;
    cin >> start >> end;
    cout << len[start][end];
}

//5 7
//1 3 1
//1 2 3
//2 4 1
//1 4 2
//3 4 1
//3 5 8
//4 5 1