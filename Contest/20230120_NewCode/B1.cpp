// Created on iPad.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, i, j;
    long long n, l, r, mid, *res;

    cin >> t;

    res = new long long[t];

    for(i = 0; i < t; i++){
        cin >> n;
        if(n == 2){
            res[i] = -1;
            continue;
        }
        l = (n + 1) / 2;
        r = n;
        while(l < r){
            mid = (l + r + 1) / 2;
            if(2 * (mid - (n + 1) / 2) > n - mid)
                r = mid - 1;
            else l = mid;
        }
        res[i] = (r + l + 1) / 2;
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }
    
    return 0;
}