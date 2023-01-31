/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \J.cpp                                                                                     *
* Project: 20230118_Contest                                                                        *
* Created Date: Wednesday Jan 18th 2023, 2:31:04 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 18/01/2023 02:44:47                                                               *
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
    int t, n, i, j;
    ll a, sum, * res;

    cin >> t;

    res = new ll[t];
    for(i = 0; i < t; i++){
        cin >> n;
        sum = 0;
        for(j = 0; j < n; j++){
            cin >> a;
            sum += ((ll)n * n - n + 2) * (ll)abs(a);
        }
        res[i] = sum;
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }

    return 0;
}