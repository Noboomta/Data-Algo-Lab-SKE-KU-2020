//
// Created by NoBoomTa on 10/21/2020.
//

#include <iostream>
using namespace std;

struct Ball{
    int color;
    Ball* nextBall;
    Ball* lastBall;
    int id;
    Ball(int color, int id, Ball* lastBall=0, Ball* nextBall=0):
        color(color), id(id), lastBall(lastBall), nextBall(nextBall) {}
};

void bomb(Ball &start, Ball* &lst){
    Ball* copy_of_start1 = new Ball(0,0);
    *copy_of_start1 = start;
    Ball* copy_of_start2 = new Ball(0,0);
    *copy_of_start2 = start;
    int this_color = start.color;
    int count = 0;
    while(copy_of_start1->color == this_color && copy_of_start1!=0){
        count+=1;
        copy_of_start1 = copy_of_start1->nextBall;
    }
    Ball* last_dup_ball = new Ball(0, 0);
    Ball* free_Ball = new Ball(0,0);
    if(count>=3){
        for(int i=0; i<count; i++){
            cout << "del" << endl;
            copy_of_start2 = copy_of_start2->nextBall;
        }
        last_dup_ball = copy_of_start2;
        last_dup_ball->nextBall->lastBall = start.lastBall;
        start.nextBall = last_dup_ball->nextBall;
        for(int j=0; j<count; j++){
            start.lastBall = free_Ball;
            start.lastBall = free_Ball;
            start = *start.nextBall;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int normal_add, later_add;
    cin >> normal_add >> later_add;
    int main_id = 1;
    Ball* pre_ball = new Ball(0, 0);
    Ball* last_ball = new Ball(0, 0);
    Ball* lst[normal_add + later_add];
    for(int i=0; i<normal_add; i++){
        int color;
        cin >> color;
        Ball* this_ball = new Ball(color, main_id++, last_ball);
        lst[main_id-1] = this_ball;
        if(main_id == 2){
            pre_ball = this_ball;
        }
        last_ball->nextBall = this_ball;
        this_ball->lastBall = last_ball;
        last_ball = this_ball;
    }
    for(int j=0; j<later_add; j++){
        int color, add_after;
        cin >> add_after >> color;
        Ball* this_ball = new Ball(color, main_id++, lst[add_after], lst[add_after]->nextBall);
        lst[main_id-1] = this_ball;
        lst[add_after]->nextBall = this_ball;
        this_ball->nextBall->lastBall = this_ball;
//        bomb(*this_ball, *lst);
    }
    Ball* run = new Ball(0,0);
    run = pre_ball;
    while(run!=0){
        cout << run->color << " <color__id> " << run->id << '\n';
        run = run->nextBall;
    }
}

