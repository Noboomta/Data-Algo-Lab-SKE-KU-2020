#include <iostream>
using namespace std;

struct ListNode {
	int value;
	ListNode* next;
};

void print_list(ListNode* head){
	while(head != 0){
		cout << head->value << endl;
		head = head->next;
	}
}

int main(){
	ListNode n1; n1.value = 1;
	ListNode n2; n2.value = 1;
	ListNode n3; n3.value = 6;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = 0;
	print_list(&n1);
}
