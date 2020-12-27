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


//#include <io.stream>
//#include <set>
//#include "vector"
//using namespace std;
//int main(){
//    ios_base::sync_with_stdio(false); cin.tie(0);
//    ios_base::sync_with_stdio(false); cout.tie(0);
//    int v=0,e=0;
//    cin >> v >> e;
//
//    set<int> s;
//    for(int i=1;i<=v;i++){
//        s.insert(i);
//    }
//
//    vector<pair<int,int>> edge_vector;
//    for(int edge=0; edge<e; edge++){
//        int a,b;
//        cin >> a >> b;
//        pair<int,int> edge_here;
//        edge_here.first = a;
//        edge_here.second = b;
//        edge_vector.push_back(edge_here);
//    }
//
//    int all_con = 1;
//    while (!s.empty()){
//        set<int> path;
//        int front = *s.begin();
//        path.insert(front);
//        for(auto pair_here: edge_vector){
//            int p1 = pair_here.first;
//            int p2 = pair_here.second;
//            if(path.find(p1) != s.end() || path.find(p2) != s.end()){
//                path.insert(p1);
//                path.insert(p2);
//            }
//        }
//        for(auto node: path){
//            s.erase(node);
//        }
//        all_con++;
//    }
//    cout << all_con;
//}