//
// Created by NoBoomTa on 11/25/2020.
//

#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ios_base::sync_with_stdio(false); cout.tie(0);
    int all_vec, all_edge;
    cin >> all_vec >> all_edge;
    vector<int> go_to[all_vec+1];
    set<int> never_visit;
    for(int i=1;i<=all_vec;i++){
        never_visit.insert(i);
    }
    for(int edge=0; edge<all_edge; edge++){
        int a,b;
        cin >> a >> b;
        go_to[a].push_back(b);
        go_to[b].push_back(a);
    }
    int all_con=0;
    queue<int> bfs;
    bfs.push(*never_visit.begin());
    never_visit.erase(*never_visit.begin());
    while (!bfs.empty()){
        int p = bfs.front();
        bfs.pop();
        for(auto in: go_to[p]){
            if (never_visit.find(in) != never_visit.end()){
                bfs.push(in);
                never_visit.erase(in);
            }
        }
        if(bfs.empty()){
            all_con++;
            if(!never_visit.empty()){
                bfs.push(*never_visit.begin());
                never_visit.erase(*never_visit.begin());
            }
        }
    }
    cout << all_con;
}