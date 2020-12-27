#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	int num;
	cin >> num;
	int temp[num];
	for(int i=0;i<num;i++){
		cin >> temp[i];
	}
	for(int i=0;i<num;i++){
		sum+=temp[i];
		if(temp[i]>=1000){
			i++;
		}
	}
	cout << sum;
}
