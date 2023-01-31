/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \B.cpp                                                                                     *
* Project: 20230118_Conrtest                                                                       *
* Created Date: Friday Jan 20th 2023, 1:34:35 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 20/01/2023 02:08:44                                                               *
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
    int t, i;
    ll n, * res, maxa, mina, a;
    cin >> t;
    res = new ll[t];
    for(i = 0; i < t; i++){
        cin >> n;
        maxa = ceil(n / sqrt(2)) - 1;
        mina = ceil(sqrt(n));
        if(maxa >= mina) res[i] = maxa;
        else res[i] = -1;
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }

    return 0;
}