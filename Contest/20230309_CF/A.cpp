/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230309_CF                                                                             *
* Created Date: Tuesday Mar 21st 2023, 9:49:06 pm                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 21/03/2023 09:51:12                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


// ERROR: TLE

#include <iostream>

using namespace std;

int a;
int t, n, i, j;
int neg, pos, rep;

void solve(){
    for(i = 0; i < pos; i++){
        cout << ++rep << " ";
    }
    for(i = 0; i < neg; i++){
        cout << --rep << " ";
    }
    cout << endl;

    rep = 0;

    for(i = 0; i < neg; i++){
        cout << 1 << " ";
        cout << 0 << " ";
    }
    for(i = 0; i < n - 2 * neg; i++){
        cout << ++rep << " ";
    }
    cout << endl;
}

int main(){
    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n;
        // a = new int[n];
        neg = 0, pos = 0, rep = 0;
        for(j = 0; j < n; j++){
            cin >> a;
            if(a > 0) pos++;
            else neg++;
        }
        solve();
    }

    return 0;
}