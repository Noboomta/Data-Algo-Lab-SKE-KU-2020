//
// Created by NoBoomTa on 9/19/2020.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int all_event;
    cin >> all_event;
    queue<int> queqe;
    for(int event_number=0; event_number<all_event;event_number++){
        int event;
        cin >> event;
        if(event == 1){
            int customer_number;
            cin >> customer_number;
            for(int customer=0; customer<customer_number; customer++){
                int id;
                cin >> id;
                queqe.push(id);
            }
        }else if(event == 2){
            cout << queqe.front() << endl;
            queqe.pop();
        }
    }
    cout << queqe.size();
    return 0;
}

//int main(){
//    ios_base::sync_with_stdio(false); cin.tie(0);
//    int n;
//    cin >> n;
//    queue<int> que;
//    for(int i=0;i<n;i++){
//        int op;
//        cin >> op;
//        if(op == 1){
//            int x;
//            cin >> x;
//            for(int j=0;j<x;j++){
//                int id;
//                cin >> id;
//                que.push(id);
//            }
//        }else if(op == 2){
//            cout << que.front() << endl;
//            que.pop();
//        }
//    }
//    cout << que.size() << endl;
//    return 0;
//}

