/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \G.cpp                                                                                     *
* Project: 20230116_Contest                                                                        *
* Created Date: Monday Jan 16th 2023, 4:58:13 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 17/01/2023 04:29:4                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

#define INF 0x3f3f3f3f + 10

long long f(long long x){
    return (long long)round(10 * sqrt(x));
}

int main(){
    int n, m, op, l, r, k, i, j, q, s = 0;
    long long * a, sum = 0, * res, * search;

    // for(i = 0; i < INF; i++){

    // }

    cin >> n >> m;
    a = new long long[n];
    res = new long long[m];
    search = new long long[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
        search[i] = f(a[i]);
        sum += a[i];
    }

    for(j = 0; j < m; j++){
        cin >> op;
        if(op == 1){
            cin >> l >> r >> k;
            for(i = l; i <= r; i++){
                if(a[i - 1] != search[i - 1]){
                    sum -= a[i - 1];
                    for(q = 0; q < k; q++){
                        a[i - 1] = search[i - 1];
                        search[i - 1] = (long long)round(10 * sqrt(a[i - 1]));
                        // cout << a[i - 1] << " ";
                        if(a[i - 1] == search[i - 1]) break;
                    }
                    sum += a[i - 1];
                }
            }
        }
        else if(op == 2){
            // cout << sum << endl;
            res[s++] = sum;
        }
    }

    if(s)
        for(i = 0; i < s; i++) cout << res[i] << endl;

    // cout << f(0) << endl;

    return 0;
}