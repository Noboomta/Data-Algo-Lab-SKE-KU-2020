#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct ball{
    int id;
    int color;
    struct ball* next_ball;
    ball(int id=0,int color=0,ball* next_ball = 0):color(color),id(id),next_ball(next_ball){}
}ball;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,i,tmp,a,b,cnt=1;
    ball* now = new ball(0,0);
    ball* head;
    cin >> n >> m;
    ball* lst[n+m];

    for(i=0;i<n;i++){
        cin >> tmp;
        ball* new_ball = new ball(cnt,tmp);
        lst[cnt] = new_ball;
        if( cnt == 1){
            head = new_ball;
        }
        now->next_ball = new_ball;
        now = new_ball;
        cnt++;
    }
    /*
    ball* head2 = new ball(0,0);
    head2 = head;
    while(head2 != 0){
      cout << head2->id << " ";
      head2 = head2->next_ball;
    }
    */


    ball* tmp2;
    for(i=0;i<m;i++){
        cin >> a >> b;
        tmp2 = lst[b];
        ball* new_ball2 = new ball(cnt,a);
        lst[cnt] = new_ball2;
        new_ball2->next_ball = tmp2->next_ball;
        tmp2->next_ball = new_ball2;
        cnt++;

/*
    ball* head3 = new ball(0,0);
    head3 = head;
    while(head3 != 0){
      cout << head3->id << " ";
      head3 = head3->next_ball;
    }
*/
    }

    ball* head3 = new ball(0,0);
    head3 = head;
    while(head3 != 0){
        cout << head3->id << endl;
        head3 = head3->next_ball;
    }

}