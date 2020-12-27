#include <iostream>
using namespace std;
main()
{
  int out[100];   // we will keep the remainders here.
  int d = 0;      // we will use d to count the number of times we divide n

  int n;
  cin >> n;

  // Note that we use do-while loop here to make sure we
  //   enter the loop at least once.  This is to deal with
  //   the case when n=0.
  do {
    // divides n with 2 and keeps the remainder in array out.
    //   make sure to update the index d accordingly

	out[d] = n%2;
	n/=2;
	d++;

  } while(n > 0);

  // At this point, we should have everything in array out.
  //   You just need to print them.  If your output is backward, e.g.,
  //   you get 0101 instead of 1010, you have to check at the direction
  //   of your printing loop.

  
for(int i =d-1;i>=0;i--){
    cout << out[i];
}

}
