#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
  while(true) {
    bool changed = false;
    for(int i=0; i <n-1; i++) {
      // compares a[i] with a[i+1]
      if(a[i] > a[i+1]) {
        // wrong order, swap them;  don't forget to update changed variable
        
		int t = a[i];
		a[i] = a[i+1];
		a[i+1] = t;
		changed = true;

      }
    }
    if(!changed)
      break;
    }
}

main(){
	int a[1000];
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	bubble_sort(a, n);
	for(int i=0; i<n; i++)
	    cout << a[i] << endl;
}
