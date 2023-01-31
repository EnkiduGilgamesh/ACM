/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230114_Contest                                                                        *
* Created Date: Saturday Jan 14th 2023, 9:34:21 pm                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 14/01/2023 10:01:25                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
// #include <vector>
// #include <cstdio>

using namespace std;

#define MAXN 0x3f3f3f3f

int main(){
    int n, q, * a, i, * out, outNum = 0;
    // vector<vector<int>> query;
    cin >> n;
    a = new int[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> q;
    out = new int[q];
    int k, q1, q2;
    for(i = 0; i < q; i++){
        cin >> k;
        if(k == 1){
            cin >> q1 >> q2;
            a[q1 - 1] = q2;
        }
        else{
            cin >> q1;
            out[outNum++] = a[q1 - 1];
        }
    }

    for(i = 0; i < outNum; i++)
        cout << out[i] << endl;

    return 0;
}