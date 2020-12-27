#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int height[n];
	for(int i = 0; i<n; i++){
		cin >> height[i];
	}
	for(int i = 0; i<n; i++){
		int taller = 0;
		for(int j = 0; j<n; j++){
			if(height[j]>height[i]){
				taller++;
			}
		}
		cout << taller << endl;
	}
}
