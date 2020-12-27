//
// Created by NoBoomTa on 10/22/2020.
//
//LinkedList

#include <iostream>
#include <vector>

using namespace std;

struct card{
    int val;
    card* next;
    card* las;
    card(int val, card* next=0, card* las=0):
            val(val), next(next), las(las) {}
};

int main(){
    int N,K;
    cin >> N >> K;
    card* head = new card(0,0);
    card* run = new card(00,0);
    bool a = true;
    for(int i=0;i<N;i++){
        int val;
        cin >> val;
        card* newCard = new card(val,0);
        if(a){
            a= false;
            head = newCard;
        }
        if(i == N-1){
            newCard->next = head;
            head->las = newCard;
        }
        run->next = newCard;
        newCard->las = run;
        run = newCard;
    }
    run = head;
    for(int j=0;j<K;j++){
        int want;
        int sum=0;
        cin >> want;
        while (run != 0){
            sum += run->val;
            if(sum>=want){
//                run->las->next = run->next;
//                cout << run->val<< endl;
//                run->next->las = run->las;
                run->las->next = run->next;
                run->las->next->las = run->las;
                run->val = 10000;
                run = run->next;
                break;
            }
            run = run->next;
        }
    }
    int itm = 0;
    for(int i=0;i<K;i++){
        run = run->las;
    }
//    head = run;
//    head = head->next;
    while(head != 0 && itm<N-K){
        while(head->val == 10000){
            head = head->next;
        }
        cout << head->val << endl;
        head = head->next;
        itm++;
    }
}

//int main(){
//    ios_base::sync_with_stdio(false); cin.tie(0);
//    int i =0;
//    int N,K;
//    cin >> N >> K;
//    vector<int> v(N);
//    for(int i=0; i<N; i++){
//        cin >> v[i];
//    }
//    int arr[K];
//    int last_lo=0;
//    for(int j=0; j<K; j++){
//        cin >> arr[j];
//        int sum = 0;
//        for(int i=last_lo; i<N; i++){
//            sum+=v[i];
//            if(sum>=arr[j]){
////                cout << sum << " " << arr[j] << " " << v[i]<< endl;
////                for(int k=0; k<v.size(); k++){
////                    cout << v[k] << " ";
////                }
////                cout << endl;
//                v.erase(v.begin()+i);
////                for(int k=0; k<v.size(); k++){
////                    cout << v[k] << " ";
////                }
////                cout << endl;
//                last_lo = i;
//
//                break;
//            }
//            if(i == v.size()){
//                i=0;
//            }
//        }
//    }
////    for(int i=1;i<=N;i++){
////        v[i-1] = i;
////    }
////    while(v.size() > 1){
////        i = ((i+K)-1)%v.size();
////        v.erase(v.begin()+(i));
////    }
////    cout << v[0];
//    for(int k=0; k<v.size(); k++){
//        cout << v[k] << endl;
//    }
//
//    return 0;
//}