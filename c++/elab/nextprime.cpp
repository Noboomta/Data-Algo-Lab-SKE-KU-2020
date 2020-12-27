#include <iostream>
using namespace std;

bool check_prime(int p){
	if (p <= 1) {
		return false;
	}
	  
	int num = 0;
	for(int i=2;i<=p;i++){
	    if(p%i == 0){
	        num++;
	    }
	}
	if(num == 1){
	    return true;
	}
	return false;
	
}
int main()
{
  
  	int x;
  	cin >> x;
  	int n = x+1;
  	while(n>x){
		if(check_prime(n)){
			cout << n;
			break;
		}
		n++;
  	}

}
