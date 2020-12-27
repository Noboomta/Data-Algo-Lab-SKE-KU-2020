#include <iostream>
using namespace std;

int main(){
	int st;
	int en;
	int count;
	cin >> st >> en;
	for(int i=st; i<=en;i++){
		count+=i;
	}
	cout << count;
}
