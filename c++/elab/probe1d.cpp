//
// Created by NoBoomTa on 12/26/2020.
//

#include "probelib.h"
#include <cstdio>
#include <cmath>

int n;

int main()
{
    int n = probe_init();
    int mid, low, high;
    low = 0;
    high = n - 1;
    while (true)
    {
        // mid = half of low and giht
        int sum = low + high;
        mid = floor(sum / 2);
        if (low > mid){
            probe_answer(-1);
            break;
        }
        if (probe_check(low, mid)){
            high = mid;
            if (low == mid)
                probe_answer(low);
        }
        else{
            low = mid + 1;
        }
    }
}