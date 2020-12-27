//
// Created by NoBoomTa on 11/18/2020.
//

#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> vec;
    int work_num = 0;
    cin >> work_num;
    for(int round = 0; round<work_num; round++){
        int _operator = 0;
        cin >> _operator;
        // insert
        if(_operator == 1){
            int k, cookie_number;
            cin >> k >> cookie_number;
            // k greater than size, have to add at last
            if(k > vec.size()){
                vec.push_back(cookie_number);
            }
            else{
                vec.insert(vec.begin() + k, cookie_number);
            }
        }
        // eat
        else if(_operator == 2){
            int k = 0;
            cin >> k;
            if(k>vec.size()){
                continue;
            }
            else{
                vec.erase(vec.begin() + k - 1);
            }
        }
    }
    for(auto element: vec){
        cout << element << endl;
    }
}

//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    list<int> list1;
//    list<int>::iterator it = list1.begin();
//
//    int a;
//    cin >> a ;
//    int op , k,num;
//    for (int i = 0; i < a; ++i) {
//
//        cin >> op;
//        if (op == 1){
//
//            cin >> k >> num;
//
//            if (k > list1.size()){
//                list1.push_back(num);
//            }
//            else{
//                it = list1.begin();
//
//                advance(it,k);
//                list1.insert(it,1,num);
//
//            }
//
//        }else if (op == 2){
//            cin >> k;
//
//            if (k <= list1.size()){
//                it = list1.begin();
//
//                advance(it,k-1);
//                list1.erase(it);
//            }
//        }
//
//    }
//    for (auto it = list1.begin();
//         it != list1.end(); it++) {
//        cout << *it << "\n";
//
//    }
//
//}