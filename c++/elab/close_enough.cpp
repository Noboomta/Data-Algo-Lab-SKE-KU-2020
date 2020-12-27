#include <iostream>
#include <cstdlib>
using namespace std;



int main(){
	int num;
	int len;
	int close;
	cin >> num >> len;
	int horse[1000];
	for(int i=0;i<num;i++){
		cin >> horse[i];
	}
	for(int i=0;i<num;i++){
		for(int j=i+1; j<num;j++){
			if(  abs(horse[j] - horse[i]) <= len ){
				close++;
			}
		}
	}
	
	cout << close;
}
