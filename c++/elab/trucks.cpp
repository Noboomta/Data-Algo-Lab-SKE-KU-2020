#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n;
	cin >> n;
	int pack[1000];
	int inTruck = 0;
	int truck = 1;
	for(int i=0;i<n;i++){
		cin >> pack[i];
	}
	for(int i=0;i<n;i++){
		if(inTruck+pack[i] <= 1000){
			inTruck+=pack[i];
		}
		else{
			truck+=1;
			inTruck = pack[i];
		}
	}
	cout << truck;
}
