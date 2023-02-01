/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \H.cpp                                                                                     *
* Project: 20230201_NowCoder                                                                       *
* Created Date: Wednesday Feb 1st 2023, 1:54:52 pm                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 1/02/2023 03:26:33                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cstring>

using namespace std;

int main(){
    long long x, y, k, n, t;

    cin >> x >> y >> k >> n >> t;

    long long l = 0, r = n, mid, g, s = 0, div, re, ans, tk, tx;

    int i;

    tx = x;
    g = 0;

    for(i = n; i > 0; i--){
        s += i * tx;
        // cout << s << endl;
        g += i;
        div = g / k;
        tx = x + div * y;
    }

    // g = (n + 1) * n / 2;
    // div = g / k;
    // re = g % k;
    // for(i = 0; i < div; i++){
    //     s += k * (x + i * y);
    // }
    // s += re * (x + i * y);
    // cout << s << endl;
    if(s < t) ans = -1;
    else{
        while(l < r){
            s = 0;
            tx = x;
            g = 0;
            mid = (l + r) / 2;
            for(i = n; i > n - mid; i--){
                s += i * tx;
                // cout << s << endl;
                g += i;
                div = g / k;
                tx = x + div * y;
            }
            if(s < t) l = mid + 1;
            else r = mid;
        }
        ans = (l + r) / 2;
    }

    cout << ans << endl;

}