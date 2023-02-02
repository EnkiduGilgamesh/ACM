/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W15                                                                                     *
* Created Date: Thursday Feb 2nd 2023, 9:23:16 am                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 2/02/2023 09:29:8                                                                 *
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
    int t, n, i, j, a, min, num, * res;

    cin >> t;

    res = new int[t];

    for(i = 0; i < t; i++){
        cin >> n;
        min = 200;
        //a = new int[n];
        for(j = 0; j < n; j++){
            cin >> a;
            if(a < min){
                min = a;
                num = 1;
            }
            else if(a == min){
                num++;
            }
        }
        res[i] = n - num;
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }

    return 0;
}