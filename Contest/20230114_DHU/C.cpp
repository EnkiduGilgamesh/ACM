/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \C.cpp                                                                                     *
* Project: 20230114_Contest                                                                        *
* Created Date: Saturday Jan 14th 2023, 10:57:27 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 15/01/2023 07:29:30                                                               *
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

#define MAXN 0x3f3f3f3f

int main(){
    int t, n, a, i, j;
    long long  s1, s2, * res;
    cin >> t;
    res = new long long[t];
    for(i = 0; i < t; i++){
        res[i] = 0;
        cin >> n;
        for(j = 0; j < n; j++){
            cin >> a;
            res[i] += a;
        }
        res[i] = abs(res[i]);
    }

    for(i = 0; i < t; i++){
        cout << res[i] <<endl;
    }

    return 0;
}