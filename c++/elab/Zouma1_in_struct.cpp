#include <iostream>
using namespace std;

struct Ball{
    int color;
    Ball* next_ball;
    int id;
    Ball(int color, int id, Ball* next_ball=0):
            color(color), id(id), next_ball(next_ball) {}
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    ios_base::sync_with_stdio(false); cout.tie(0);
    int n, m;
    int id = 1;
    cin >> n >> m;
    Ball* now = new Ball(0, 0);
    Ball* head;
    Ball* lst[n+m];
    for (int i = 0; i < n; i++) {
        int color;
        cin >> color;
        Ball* new_ball = new Ball(color, id++);
        lst[id-1] = new_ball;
        if (id == 2)
        {head = new_ball;
        }
        now->next_ball = new_ball;
        now = new_ball;
    }
    for (int i = 0; i < m; i++) {
        int color, after;
        cin >> color >> after;
        Ball* new_ball = new Ball(color, id++);
        lst[id-1] = new_ball;
        new_ball->next_ball = lst[after]->next_ball;
        lst[after]->next_ball = new_ball;
    }
    while (head != 0) {
        cout << head->id << endl;
        head = head->next_ball;
    }
}

//#include <iostream>
//using namespace std;
//
//struct Ball{
//    int color;
//    Ball* next_ball;
//    int id;
//    Ball(int color, int id, Ball* next_ball=0):
//            color(color), id(id), next_ball(next_ball) {}
//};
//
//int main() {
//    ios_base::sync_with_stdio(false); cin.tie(0);
//    int n, m;
//    int id = 1;
//    cin >> n >> m;
//    Ball* now = new Ball(0, 0);
//    Ball* head;
////    Ball* lst[n+m];
//    for (int i = 0; i < n; i++) {
//        int color;
//        cin >> color;
//        Ball* new_ball = new Ball(color, id++);
////        lst[id-1] = new_ball;
//        if (id == 2)
//        {head = new_ball;
//        }
//        now->next_ball = new_ball;
//        now = new_ball;
//    }
//    for (int i = 0; i < m; i++) {
//        int color, after;
//        cin >> color >> after;
//        Ball* new_ball = new Ball(color, id++);
////        lst[id-1] = new_ball;
////        new_ball->next_ball = lst[after]->next_ball;
////        lst[after]->next_ball = new_ball;
//        Ball *loop = head;
//        while (loop != 0) {
//            if (loop->id == after) {
//                new_ball->next_ball = loop->next_ball;
//                loop->next_ball = new_ball;
//                break;
//            }
//            loop = loop->next_ball;
//        }
//    }
//    while (head != 0) {
//        cout << head->id << endl;
//        head = head->next_ball;
//    }
//}