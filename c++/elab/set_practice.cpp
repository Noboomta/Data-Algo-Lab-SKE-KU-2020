//
// Created by NoBoomTa on 9/24/2020.
//

#include <iostream>
#include<set>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    set<int> s;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int i=0;i<M;i++){
        int x;
        cin >> x;
        auto it1 = s.upper_bound(x);
        auto it2 = s.lower_bound(x);
        it1--;
        if(abs(*it1-x) > abs(*it2-x)){
            cout << *it2 <<endl;
        }else{
            cout << *it1 << endl;
        }
    }
    return 0;
}