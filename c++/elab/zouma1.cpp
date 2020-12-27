#include <iostream>
using namespace std;

class Link_list{
public:
	Link_list* next;
	int color, num;
	Link_list(int color=0, Link_list *next=0)
	{
		this->color = color;
		this->next = next;
		this->num = id++;
	}
	static int id;
};

int Link_list::id = 0;

int main(){
	int n,m; // n is numballs, m is number of shots
	int d,pos; // d is the ball color, p is the ball position or id
	Link_list *dummy = new Link_list(); 
	Link_list *p = dummy;
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		cin >> d;
		p->next = new Link_list(d);
		p = p->next;
	}
	for(int i=0; i<m; i++) {
	    cin >> d >> pos;
	    p = dummy;
	    while(p->num != pos){
	    	p = p->next;
//	    	cout << "id is " << p->num << endl;
		}
		p->next = new Link_list(d, p->next);
	}
	
	while(dummy != 0){
		cout << dummy->next->num << endl;
		dummy = dummy->next;
	}
}

//const int MAX_N = 2000100;
//
//int c[MAX_N]; // input
//
//int balls[MAX_N]; // ball array
//int ball_count = 0; // size of ball array
//
//void insert_end(int lst[], int& s, int val)
//{
//	/* Inserts a ball at the end of the array. */
//    lst[s] = val; 
//    s++;
//}
//
//int find(int lst[], int s, int target)
//{
//	/* Finds the index of the target ball */
//	for(int i=0; i<s; i++){
//		if(lst[i] == target){
//			return i;
//		}
//	}
//}
//
//int insert(int lst[], int& ballCount, int newId, int pos)
//{	
//	
//	int temp;
//	temp = lst[loc]; 
//    for(int i=pos;i<ballCount-1;i++){
//    	temp2 = 
//	}
//}
//
//main()
//{
//  int n,m; // n is numballs, m is number of shots
//  int d,p; // d is the ball color, p is the ball position or id
//  
//  cin >> n >> m;
//  for(int i=0; i<n; i++) {
//    cin >> c[i];
//    insert_end(balls, ball_count, i+1);
//  }
//  for(int i=0; i<m; i++) {
//    cin >> d >> p;
//    int idx = find(balls, ball_count, p);
//    insert(balls, ball_count, i+n+1, idx+1);
//  }
//
//  for(int i=0; i<ball_count; i++) {
//    cout << balls[i] << endl;
//  }
//}
