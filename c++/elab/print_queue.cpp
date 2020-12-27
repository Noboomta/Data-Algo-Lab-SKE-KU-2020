//
// Created by NoBoomTa on 11/30/2020.
//

#include <iostream>
#include <queue>

using namespace std;

struct Job{
    int priority;
    bool want_print;
    Job(int priority, bool want_print):
            priority(priority), want_print(want_print) {}
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int all_work,print_index;
        cin >> all_work >> print_index;
        queue <Job> queue;
        priority_queue <int> pq;
        for (int i = 0; i < all_work; ++i){
            int temp;
            cin>>temp;
            pq.push(temp);
            if (i == print_index)
                queue.push(Job(temp, 1));
            else queue.push(Job(temp, 0));
        }

//        priority_queue <int> pqc = pq;
//        while (! pqc.empty() ) {
//            cout << pqc.top();
//            pqc.pop();
//        }
//        cout << "\n";
//        std::queue<Job> jbc = queue;
//        while (! jbc.empty() ) {
//            cout << jbc.front().priority << "-" << jbc.front().want_print << " ";
//            jbc.pop();
//        }
//        cout << "\n";

        int time = 0;
        while(true){
            auto queue_here = queue.front();
            if (queue_here.priority == pq.top()){
                if (queue_here.want_print == 1){
                    time++;
                    cout << time << endl;
                    break;
                }
                else{
                    pq.pop();
                    queue.pop();
                    time++;
                }
            }
            else {
                queue.push(queue_here);
                queue.pop();
            }
        }
    }
}
