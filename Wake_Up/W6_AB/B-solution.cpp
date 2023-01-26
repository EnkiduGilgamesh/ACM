/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \B-solution.cpp                                                                            *
* Project: W6_AB                                                                                   *
* Created Date: Sunday Jan 15th 2023, 9:58:55 am                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 15/01/2023 10:16:52                                                               *
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

#define ll long long

int main(){
    int n, i; 
    ll x, y, sum = 0, * res;
    cin >> n >> x >> y;

    if(y < n){
        cout << -1 << endl;
        return 0;
    }

    res = new ll[n];
    for(i = 0; i < n - 1; i++){
        res[i] = 1;
    }
    res[n - 1] = y - n + 1;
    
    for(i = 0; i < n; i++){
        sum += res[i] * res[i];
    }

    if(sum >= x){
        for(i = 0; i < n; i++){
            cout << res[i] << endl;
        }
    }
    else cout << -1 << endl;

    return 0;
}