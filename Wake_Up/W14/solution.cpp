/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W14                                                                                     *
* Created Date: Wednesday Feb 1st 2023, 10:09:05 am                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 1/02/2023 11:34:41                                                                *
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
    int t, i, j;
    long long a, b, m;

    cin >> t;
    int * ans = new int[t];

    for(i = 0; i < t; i++){
        cin >> a >> b;
        ans[i] = 0x3f3f3f3f;
        j = 0;
        if(a == b){
            ans[i] = 2;
            continue;
        }
        while(1){
            if(b + j == 1){
                j++;
                continue;
            }
            m = floor(log(a) / log(b + j)) + 1;
            if(m + j <= ans[i]){
                ans[i] = m + j;
            }
            j++;
            if(m + j >= 32) break;
        }
    }

    for(i = 0; i < t; i++){
        cout << ans[i] << endl;
    }

    return 0;
}