//
// Created by NoBoomTa on 12/27/2020.
//

#include "iostream"
using namespace std;

struct Dna{
    int id;
    Dna* next_dna;
    Dna* last_dna;
    Dna(int id, Dna* next_dna = 0, Dna* last_dna = 0):
            id(id), next_dna(next_dna), last_dna(last_dna) {}
};

Dna* lst[1000];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int line, opr;
    cin >> line >> opr;
    int idd = 0;
    for(int i=0;i<line;i++){
        int n;
        cin >> n;
        for(int j=0;j<n;j++){
            idd++;
            Dna* newDna = new Dna(idd);
            lst[idd] = newDna;
            if(j!=0){
                lst[idd-1]->next_dna = newDna;
                newDna->last_dna = lst[idd-1];
            }
        }
    }
    Dna* start = lst[1];
    for(int i=0;i<opr;i++){
        char op;
        cin >> op;
        if(op == 'F'){
            if(start->id != idd && start->next_dna != 0){
                start = start->next_dna;
                cout << start->id << endl;
            }
            else{
                cout << start->id << endl;
            }
        } else if(op == 'B'){
            if(start->last_dna != 0 && start->id!=1){
                start = start->last_dna;
                cout << start->id << endl;
            }
            else{
                cout << start->id << endl;
            }
        } else if(op == 'C'){
            int iddd;
            cin >> iddd;
            start->next_dna = lst[iddd];
            lst[iddd]->last_dna = start;
            start = start->next_dna;
            cout << start->id << endl;
        }
        Dna* a = lst[1];
        while (a->next_dna != 0){
            cout << a->id << " ";
            a = a->next_dna;
        }
        cout << endl;
    }

}

