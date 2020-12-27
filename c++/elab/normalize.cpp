#include <iostream>
#include <algorithm>  
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    if (a == b) 
        return a; 
   
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int main(){
	int x;
	int y;
	int s;
	cin >> x >> y;
	
	s = gcd(x,y);
//	cout << s
	cout << x/s << "/" << y/s;
	
	return 0;
}
