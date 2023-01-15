/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \C.cpp                                                                                     *
* Project: 20230114_Contest                                                                        *
* Created Date: Saturday Jan 14th 2023, 10:57:27 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 14/01/2023 11:13:37                                                               *
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
    int t, n, a, i, j, s1, s2, * res;
    cin >> t;
    res = new int[t];
    for(i = 0; i < t; i++){
        s1 = s2 = 0;
        cin >> n;
        for(j = 0; j < n; j++){
            cin >> a;
            if(a * s1 >= a * s2) s1 += a;
            else s2 += a;
        }

        res[i] = abs(abs(s1) - abs(s2));
    }

    for(i = 0; i < t; i++){
        cout << res[i] <<endl;
    }

    return 0;
}