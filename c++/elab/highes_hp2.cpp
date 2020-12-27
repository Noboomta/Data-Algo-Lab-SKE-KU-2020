#include <iostream>
using namespace std;

main()
{
	int n;
	cin >> n;
	int hp = 100; // initial HP
  	int max_hp = hp;
  	bool alive = true;


  	for(int i=0; i<n; i++) {
    	int a;
    	cin >> a;
		if(hp+a>=0  && alive){
    		hp+=a;
		    if(hp>max_hp){
		        max_hp = hp;
		    }
		}
		else{
		    alive = false;
		}

 	 }
 	 cout << max_hp << endl;
}
