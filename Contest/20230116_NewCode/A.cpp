/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230116_Contest                                                                        *
* Created Date: Monday Jan 16th 2023, 1:00:13 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 16/01/2023 01:51:41                                                               *
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

using namespace std;

int main(){
    int t, i, j, len, sa, sb, *res;
    string s;

    cin >> t;
    res = new int[t];
    for(i = 0; i < t; i++) res[i] = -1;
    for(i = 0; i < t; i++){
        cin >> s;
        sa = sb = 0;

        for(j = 0; j < 5; j++){
            if(s[2 * j] == '1') sa++;
            if(sb > sa && (sb - sa) > (4 - j)){
                res[i] = 2 * j + 1;
                break;
            }
            else if(sa > sb && (sa - sb) > (5 - j)){
                res[i] = 2 * j + 1;
                break;
            }

            if(s[2 * j + 1] == '1') sb++;

            // cout << abs(sa - sb) << endl;

            if(abs(sa - sb) > (4 - j)){
                res[i] = 2 * (j + 1);
                break;
            }
        }
    }

    for(i = 0; i < t; i++) cout << res[i] << endl;
    return 0;
}