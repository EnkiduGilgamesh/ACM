/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W19_Min_Max_Swap                                                                        *
* Created Date: Monday Feb 6th 2023, 10:20:52 am                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 6/02/2023 10:26:53                                                                *
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
    int t, n, * a, * b, i, j, tem, ma, mb;
    long long * ans;

    cin >> t;

    ans = new long long[t];

    for(i = 0; i < t; i++){
        cin >> n;
        a = new int[n];
        b = new int[n];

        for(j = 0; j < n; j++){
            cin >> a[j];
        }

        for(j = 0; j < n; j++){
            cin >> b[j];
            if(b[j] < a[j]){
                tem = b[j];
                b[j] = a[j];
                a[j] = tem;
            }
        }

        ma = mb = 0;
        for(j = 0; j < n; j++){
            if(ma < a[j]) ma = a[j];
            if(mb < b[j]) mb = b[j];
        }

        ans[i] = (long long)ma * mb;
    }

    for(i = 0; i < t; i++) cout << ans[i] << endl;
}