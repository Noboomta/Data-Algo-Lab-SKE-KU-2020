#include <iostream>
using namespace std;
main()
{
  int n;
  cin >> n;
  do {
    int digit = n%10;
    cout << digit << endl;
    n /=10;
  } while(n>=1);
}
