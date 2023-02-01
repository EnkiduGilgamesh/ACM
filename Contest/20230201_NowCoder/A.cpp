/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230201_NowCoder                                                                       *
* Created Date: Wednesday Feb 1st 2023, 3:46:50 pm                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 1/02/2023 04:33:18                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int bFind(long long t, long long * a, int len){
    if(a[0] > t) return -1;
    int l = 0, r = len - 1, mid;
    while(l < r){
        mid = (l + r + 1) / 2;
        if(a[mid] > t) r = mid - 1;
        else l = mid;
    }

    return (l + r) / 2;
}

int main(){
    int n, q, i, j, m;
    long long sum = 0;
    cin >> n >> q;
    long long * a = new long long[n];
    long long * s = new long long[n];
    long long * ans = new long long[q];

    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    for(i = 0; i < n; i++){
        sum += a[i];
        s[i] = sum;
        // cout << a[i] << endl;
    }

    int k, x;

    for(i = 0; i < q; i++){
        cin >> k >> x;
        
        j = bFind(x, a, n);

        cout << j << endl;

        m = j - k;

        if(j < 0) ans[i] = 0;
        else if(m < 0) ans[i] = s[j];
        else ans[i] = s[j] - s[m];

        cout << m << endl;

    }

    for(i = 0; i < q; i++){
        cout << ans[i] << endl;
    }

    return 0;

}