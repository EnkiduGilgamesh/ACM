/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \E.cpp                                                                                     *
* Project: 20230118_Contest                                                                        *
* Created Date: Wednesday Jan 18th 2023, 4:55:16 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 18/01/2023 07:52:11                                                               *
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

ll n;

ll f(ll x){
    return floor(double(n) / x) + x - 1;
}

int main(){
    int t, i;
    double rn;
    ll l, r, *res, temp;

    cin >> t;

    res = new ll[t];

    for(i = 0; i < t; i++){
        cin >> n >> l >> r;
        rn = sqrt(n);
        if(rn <= (double)l){
            res[i] = l;
            continue;
        }
        if(rn >= (double)r) temp = r;
        else{
            // if(f((ll)floor(rn)) > f((ll)ceil(rn))){
            //     temp = (ll)ceil(rn);
            // }
            // else{
            //     temp = (ll)floor(rn);
            // }
            temp = (ll)ceil(rn);
        }

        while(f(temp) >= f(temp - 1) && temp - 1 >= l){
            temp--;
        }
        
        res[i] = temp;
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }

    return 0;
}