//
// Created by NoBoomTa on 12/3/2020.
//

#include <iostream>
using namespace std;
char field[105][105];
int check(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(field[i][j] == '.'){
                continue;
            }
            else if(field[i][j+1] != '.' && j<size-1){
                if(field[i][j] == '@' && field[i][j+1] == 'x'){
                    field[i][j] = '.';
                }
                else if(field[i][j] == 'x' && field[i][j+1] == '@'){
                    field[i][j] = '.';
                    field[i][j+1] = 'x';
                }
                else if(field[i][j] == '@' && field[i][j+1] == '@'){
                    field[i][j] = '.';
                }
                else if(field[i][j] == 'x' && field[i][j+1] == 'x'){
                    field[i][j] = '.';
                }
            }
            if(field[i+1][j] != '.' && i<size-1){
                if(field[i][j] == '@' && field[i+1][j] == 'x'){
                    field[i][j] = '.';
                }
                else if(field[i][j] == 'x' && field[i+1][j] == '@'){
                    field[i][j] = '.';
                    field[i+1][j] = 'x';
                }
                else if(field[i][j] == '@' && field[i+1][j] == '@'){
                    field[i][j] = '.';
                }
                else if(field[i][j] == 'x' && field[i+1][j] == 'x'){
                    field[i][j] = '.';
                }
            }
        }
    }
    int all_x = 0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout << field[i][j] << " ";
            if(field[i][j] == 'x'){
                all_x++;
            }
        }
        cout << endl;
    }
    return all_x;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int opp;
    cin >> opp;
    for(int op=0; op<opp; op++){
        int size;
        cin >> size;
//        char field[size][size];

        for(int r=0; r<size; r++){
            for(int c=0; c<size; c++){
                cin >> field[r][c];
            }
        }
//        cout << "Case " << op+1 << ": " << check(size) << endl;
        cout << check(size) << endl;
    }
}