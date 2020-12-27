#include <iostream>
using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main(){
	int number;
	cin >> number;
	int num=0;
	for(int i=2;i<=number;i++){
		if(isPrime(i) && number%i==0){
			num++;
		}
	}
	cout << num;
}
