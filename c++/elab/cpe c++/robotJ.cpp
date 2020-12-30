//
// Created by NoBoomTa on 12/30/2020.
//

#include <iostream>
using namespace std;

void destroy(int *color,int *head,int *body){
    (*color)--;
    (*head)++;
    (*body)++;
}

void make_robot(int *robot_type, int *head, int *body){
    int new_robot = min((*head), (*body));
    (*robot_type) += new_robot;
    (*head)-=new_robot;
    (*body)-=new_robot;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int h1, h2, b1, b2, money = 0;
    cin >> h1 >> h2 >> b1 >> b2;
    int x, y;
    cin >> x >> y;
    int two_color = 0, white = 0,black = 0;
    make_robot(&white, &h1, &b1);
    make_robot(&black, &h2, &b2);
    make_robot(&two_color, &h1, &b2);
    make_robot(&two_color, &h2, &b1);
    //cout << white << black << two_color;
    while(white+black > x){
        if((h1 > 0 || b1 > 0) && black > 0) destroy(&black,&h2,&b2);
        else if ((h2 > 0 || b2 > 0) && white > 0) destroy(&white,&h1,&b1);
        else if ((white && black)&&two_color+2<y){
            destroy(&black,&h2,&b2);
            destroy(&white,&h1,&b1);
        }
        else break;
        make_robot(&two_color, &h1, &b2);
        make_robot(&two_color, &h2, &b1);
    }
    if(white+black < x) money+=white+black;
    else money += x;
    if(two_color < y) money+=two_color;
    else money += y;
    cout << money;
    return 0;
}