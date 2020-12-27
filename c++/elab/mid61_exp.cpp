#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	int num;
	int temp;
	cin >> num;
	for(int i=0;i<num;i++){
		cin >> temp;
		if((i+1)%4 == 0){
			sum += 2*temp;
		}
		else{
			sum+=temp;
		}
	}
	cout << sum;
}
