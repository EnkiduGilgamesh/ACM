/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W14                                                                                     *
* Created Date: Wednesday Feb 1st 2023, 10:09:05 am                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 1/02/2023 01:08:51                                                                *
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
    int t, i, j, k;
    long long a, b, m, a1;

    cin >> t;
    int * ans = new int[t];

    for(i = 0; i < t; i++){
        cin >> a >> b;
        ans[i] = 0x3f3f3f3f;
        j = k = 0;
        if(a == b){
            ans[i] = 2;
            continue;
        }
        while(j <= 10){
            a1 = a;
            k = 0;
            if(b + j == 1){
                j++;
                continue;
            }
            do{
                k++;
                a1 = a1 / (b + j);
            } while(a1);
            if(k + j < ans[i]) ans[i] = k + j;
            j++;
        }
    }

    for(i = 0; i < t; i++){
        cout << ans[i] << endl;
    }

    return 0;
}