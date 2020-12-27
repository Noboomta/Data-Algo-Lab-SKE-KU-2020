//
// Created by NoBoomTa on 12/26/2020.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        int number;
        cin >> number;
        cout <<  fabs((number * 315 + 36962) / 10 % 10) << endl;
    }
}