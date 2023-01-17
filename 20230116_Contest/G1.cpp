/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \G1.cpp                                                                                    *
* Project: 20230116_Contest                                                                        *
* Created Date: Tuesday Jan 17th 2023, 7:11:14 pm                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 17/01/2023 07:36:44                                                               *
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
#include <algorithm>
#include <set>

using namespace std;

#define INF 0x3f3f3f3f + 10

long long f(long long x){
    return (long long)round(10 * sqrt(x));
}

int main(){
    int n, m, op, l, r, k, i, j, q, s = 0;
    long long * a, sum = 0, * res, * search;
    set<int> st;

    // for(i = 0; i < INF; i++){

    // }

    cin >> n >> m;
    a = new long long[n];
    res = new long long[m];
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] != f(a[i])) st.insert(i);
        sum += a[i];
    }
    
    st.insert(n);

    for(i = 0; i < m; i++){
        cin >> op;
        if(op == 1){
            cin >> l >> r >> k;
            j = l - 1;
            while(1){
                j = *st.lower_bound(j);
                // cout << j << endl;
                if(j > r - 1) break;
                else{
                    for(q = 0; q < min(20, k); q++){
                        sum -= a[j];
                        a[j] = f(a[j]);
                        sum += a[j];
                        // cout << a[j] << " " << f(a[j]) << endl;
                    }
                    if(a[j] == f(a[j])) st.erase(j);
                    j++;
                }
            }
        }
        else if(op == 2){
            res[s++] = sum;
        }
    }

    for(i = 0; i < s; i++){
        cout << res[i] << endl;
    }

    return 0;

}