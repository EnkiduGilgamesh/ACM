/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230118_Conrtest                                                                       *
* Created Date: Friday Jan 20th 2023, 1:01:07 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 20/01/2023 01:17:47                                                               *
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
    int n, a, i;
    ll sum = 0;
    cin >> n;
    // a = new int[n];

    for(i = 0; i < n; i++){
        cin >> a;
        while(a % 2 == 0 && a > 0){
            a /= 2;
        }
        sum += (ll)a;
    }

    cout << sum << endl;

    return 0;
}