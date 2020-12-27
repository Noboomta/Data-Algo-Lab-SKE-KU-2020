#include <iostream>
using namespace std;

struct LinkPerson{
	int leg, arm;
	LinkPerson* mom;
	LinkPerson(int leg, int arm, LinkPerson* mom=0):
		leg(leg), arm(arm), mom(mom) {}
};
int main(){
	LinkPerson* duke = new LinkPerson(2,2);
	LinkPerson* boom = new LinkPerson(20,20);
	duke->mom=boom;
	LinkPerson* urn = new LinkPerson(200,200);
	LinkPerson* dummy = duke;
    boom->mom=urn;
	while (dummy!=0){
        cout << "arm: " << dummy->arm << ", leg: " << dummy->leg << endl;
        dummy = dummy->mom;
	}
}
