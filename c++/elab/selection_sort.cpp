#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
  for(int i = 0; i < n - 1; i++) {
    int min_idx = i;
    int min_val = a[i];

    // find smallest elements from a[i] ... a[n-1]
    for(int j = i;j<=n-1;j++) {
      if(a[j]<=min_val) {
        // update min_idx and min_val accordingly
        min_idx = j;
		min_val = a[j];
      }
    }
    // swap a[i] with the smallest element
    a[min_idx] = a[i];
	a[i] = min_val;
  }
}

main(){
	int a[1000];
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	selection_sort(a, n);
	for(int i=0; i<n; i++)
	    cout << a[i] << endl;
}
