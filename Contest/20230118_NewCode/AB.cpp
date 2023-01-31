/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230118_Contest                                                                        *
* Created Date: Wednesday Jan 18th 2023, 1:03:09 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 18/01/2023 01:16:47                                                               *
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
#include <string>
#include <algorithm>

using namespace std;

#define INF 0x3f3f3f3f

typedef double db;
typedef long long ll;

int main(){
    int t, n, l1, r1, l2, r2, l3, r3, i, j, *res;
    cin >> t;
    res = new int[t];
    for(i = 0; i < t; i++){
        cin >> n >> l1 >> r1 >> l2 >> r2;
        if(l1 + l2 > n || r1 + r2 < n) res[i] = 0;
        else{
            l3 = max(n - r1, l2);
            r3 = min(n - l1, r2);
            res[i] = r3 - l3 + 1;
        }
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }

    return 0;
}
