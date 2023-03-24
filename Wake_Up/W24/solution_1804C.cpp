/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution_1804C.cpp                                                                        *
* Project: W24                                                                                     *
* Created Date: Friday Mar 24th 2023, 9:45:13 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 24/03/2023 10:22:12                                                               *
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
#define MAX 200000 + 5

ll * sp = new ll[MAX];

void solve(){
    ll n, x, p, i;
    
    cin >> n >> x >> p;

    ll min = 2 * n < p ? 2 * n : p;

    for(i = 1; i <= min; i++){
        if(sp[i] % n == (n - x) % n){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    int i, t;

    for(i = 0; i < MAX; i++){
        sp[i] = (i + 1) * i / 2;
    }

    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}