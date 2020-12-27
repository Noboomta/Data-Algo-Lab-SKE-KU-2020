//
// Created by NoBoomTa on 9/22/2020.
//

//3
//2 1
//10 10
//-10 1
//0 33
//4
//-1000 -1000
//-1000 -1000
//0 0
//-2000 -10000
//-999 -1001
//0

//NE
//divisa
//NO
//divisa
//NE
//SO
//SE

#include <iostream>
using namespace std;

void show_direction(int div_x, int div_y, int new_x, int new_y){
    if(div_x == new_x || div_y == new_y){
        cout << "divisa" << endl;
    }
    else{
        string direction = "";
        if(new_y > div_y){
            direction += "N";
        }
        else if(new_y < div_y){
            direction += "S";
        }
        if(new_x > div_x){
            direction += "E";
        }
        else if(new_x < div_x){
            direction += "O";
        }
        cout << direction << endl;
    }
}

int main(){
    bool working = true;
    while (working){
        int round;
        cin >> round;
        if(round == 0){
            working = false;
            continue;
        }
        int x,y;
        cin >> x >> y;
        for(int i=0;i <round; i++){
            int new_x, new_y;
            cin >> new_x >> new_y;
            show_direction(x, y, new_x, new_y);
        }
    }
}