/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \E.cpp                                                                                     *
* Project: 20230130_NewCode                                                                        *
* Created Date: Monday Jan 30th 2023, 3:43:38 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 30/01/2023 04:18:4                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>

using namespace std;

int main(){
    int n, t, a, i, j, v, h;
    
    long long ans = 0, m = 0;

    cin >> n >> t >> a;

    // int * v = new int[n];
    // int * h = new int[n];

    for(i = 0; i < n; i++){
        cin >> h >> v;
        if(h > a && t * v >= a){
            ans = -1;
            break;
        }
        if(h <= a) m++;
        else{
            j = (h - a) % (a - t * v) == 0 ? 1 : 2;
            // cout << ((h - a) / (a - t * v) - 1 + j) * t << endl;
            m += ((h - a) / (a - t * v) + j);
        }
    }
    
    if(ans != -1) ans = (m - 1) * t + 1;

    cout << ans << endl;

    return 0;
}
