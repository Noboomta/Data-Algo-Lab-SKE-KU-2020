#include<iostream>
using namespace std;

int lowest_buc(int buc[]){
	int buc_num = 0;
	int buc_water = 1000;
	for(int buc_number=0;buc_number<=4;buc_number++){
		if(buc[buc_number]<buc_water){
			buc_water = buc[buc_number];
			buc_num = buc_number;
		}
	}
	return buc_num;
}

int buc[5];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int num_jar = 0;
	int tank = 0;
	cin >> num_jar;
	
	for(int jar_number = 0; jar_number<num_jar; jar_number++){
		int jar_water;
		cin >> jar_water;
		int lowest_jar=lowest_buc(buc);
		buc[lowest_jar] += jar_water;
		if(buc[lowest_jar]>=1000){
			tank+=1000;
			buc[lowest_jar] = 0;
		}
		for(int j=0;j<5;j++){
			cout << buc[j] << " ";
		}cout << endl;
	}
	cout << tank;
}
