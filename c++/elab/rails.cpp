//
// Created by NoBoomTa on 12/26/2020.
//

#include "iostream"
#include "list"

using namespace std;

list<int> clear(list<int> ll){
    ll.clear();
    return ll;
}

int main(){
    list<int> station;
    list<int> goal;
    int ipt, train;

    while(true){
        cin >> ipt;
        if(ipt == 0){
            break;
        }

        while (true){
            goal = clear(goal);
            station = clear(station);

            cin >> train;
            if(train == 0){
                break;
            }

            goal.push_back(train);

            for(int i=1;i<ipt;i++){
                cin >> train;
                goal.push_back(train);
            }

            for(int i=1;i<=ipt;i++){
                station.push_back(i);
                while(station.back() == goal.front() && !station.empty();){
                    goal.pop_front();
                    station.pop_back();
                }
            }

            if(station.empty()){
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }

        }

        cout << endl;
    }
}