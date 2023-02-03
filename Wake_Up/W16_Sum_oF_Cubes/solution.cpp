/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W16_Sum_oF_Cubes                                                                        *
* Created Date: Friday Feb 3rd 2023, 9:53:23 am                                                    *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 3/02/2023 10:11:37                                                                *
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
#include <cstring>

using namespace std;

bool findB(long long x, long long a){
    long long l = 1, r = a, mid, n = x - pow(a, 3);
    while(l <= r){
        mid = (l + r) / 2;
        if(pow(mid, 3) == n) return true;
        else if(pow(mid, 3) > n) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}

int main(){
    int t, i;
    long long x, a, b, j, k, m, n, l, r, mid;
    cin >> t;

    int * ans = new int[t];
    memset(ans, 0, sizeof(int) * t);

    for(i = 0; i < t; i++){
        cin >> x;
        m = pow(x, (double)1 / 3);
        // cout << m << endl;
        for(j = 1; j <= m; j++){
            if(findB(x, j)){
                ans[i] = 1;
                break;
            }
        }
    }

    for(i = 0; i < t; i++){
        if(ans[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}