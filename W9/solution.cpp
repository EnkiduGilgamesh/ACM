/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W9                                                                                      *
* Created Date: Wednesday Jan 18th 2023, 10:06:47 am                                               *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 18/01/2023 10:22:4                                                                *
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
    int t, n, i, j, * res, p;
    cin >> t;
    res = new int[t];

    for(int i = 0; i < t; i++){
        p = 0;
        cin >> n;

        if(n > 99999999){
            p += n / 111111111;
            n = 99999999;
        }

        if(n > 9999999){
            p += n / 11111111;
            n = 9999999;
        }

        if(n > 999999){
            p += n / 1111111;
            n = 999999;
        }
        if(n > 99999){
            p += n / 111111;
            n = 99999;
        }
        if(n > 9999){
            p += n / 11111;
            n = 9999;
        }
        if(n > 999){
            p += n / 1111;
            n = 999;
        }
        if(n > 99){
            p += n / 111;
            n = 99;
        }
        if(n > 9){
            p += n / 11;
            n = 9;
        }
        p += n;

        res[i] = p;
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }

    return 0;
}