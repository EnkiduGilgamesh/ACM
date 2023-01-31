/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \E.cpp                                                                                     *
* Project: 20230114_Contest                                                                        *
* Created Date: Sunday Jan 15th 2023, 8:19:31 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 16/01/2023 01:00:50                                                               *
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

#define MAXN 0x3f3f3f3f

int main(){
    long long money, expense = 0, l = 0, r = 1000000000500, mid;
    int p[3], s[3], len, i, j, m[3] = {0};
    string ham;
    cin >> ham;
    for(j = 0; j < 3; j++){
        cin >> s[j];
    }
    for(j = 0; j < 3; j++){
        cin >> p[j];
    }
    cin >> money;

    len = ham.length();

    for(i = 0; i < len; i++){
        if(ham[i] == 'B') m[0]++;
        else if(ham[i] == 'S') m[1]++;
        else if(ham[i] == 'C') m[2]++;
    }

    // cout << m[0] << m[1] << m[2] << endl;

    while(l < r){
        expense = 0;
        mid = (r + l + 1) / 2;
        // cout << mid << endl;
        for(j = 0; j < 3; j++){
            if(m[j] * mid > s[j]){
                expense += (m[j] * mid - s[j]) * p[j];
            }
        }
        // cout << expense << endl;
        if(expense > money){
            r = mid - 1;
        }
        else l = mid;
    }

    cout << (r + l + 1) / 2 << endl;

    return 0;
}