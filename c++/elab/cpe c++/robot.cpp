//
// Created by NoBoomTa on 12/28/2020.
//

#include "iostream"
using namespace std;
int main(){
    int H1, H2, B1, B2;
    int same, swap;
    cin >> H1 >> H2 >> B1 >> B2;
    cin >> same >> swap;
    int money = 0;
    int allw = min(H1,B1);
    H1 -= allw; B1 -= allw;

    int allb = min(H2,B2);
    H2 -= allb; B2 -= allb;

    int a = min(H1,B2);
    H1-=a; B2-=a;
    int b = min(H2,B1);
    H2-=b; B1-=b;

    cout << allw << " " << allb << " " << a << " " << b << " H1->" << H1 << " H2->" << H2 << " B1->" << B1 << " B2->" << B2 << endl;

    while(same < allw+allb){
//        cout << "start" << allw << " " << allb << " " << a << " " << b << " H1->" << H1 << " H2->" << H2 << " B1->" << B1 << " B2->" << B2 << endl;
        if((H1>0 || B1>0) && allb>0){
            H2++;B2++;allb--;
        }
        else if((H2>0 || B2>0) && allw>0){
            H1++;B1++;allw--;
        }
        else if (allw>0 && allb>0){
            H1++;B1++;allw--;
            H2++;B2++;allb--;
        }
        else{
            break;
        }
        int c = min(H1,B2);
        H1-=c; B2-=c;
        a += c;
        int d = min(H2,B1);
        H2-=d; B1-=d;
        b += d;
//        cout << "stop " << allw << " " << allb << " " << a << " " << b << " H1->" << H1 << " H2->" << H2 << " B1->" << B1 << " B2->" << B2 << endl;
    }
//    cout << allw << " " << allb << " " << a << " " << b << " H1->" << H1 << " H2->" << H2 << " B1->" << B1 << " B2->" << B2 << endl;
    money = min(same, allw+allb) + min(swap, a+b);
    cout << money;
}

