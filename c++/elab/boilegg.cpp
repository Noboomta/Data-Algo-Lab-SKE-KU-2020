//
// Created by NoBoomTa on 12/26/2020.
//

#include "iostream"

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t = 0;
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n, p, q;
        cin >> n >> p >> q;

        int total = 0;
        int weight = 0;

        for (int i=0; i<n; ++i)
        {
            int egg;
            cin >> egg;

            if(egg + weight <= q and total + 1 <= p){
                ++total;
                weight += egg;
            }
        }

        cout << "Case " << ++t << ": " << total << endl;
    }
}