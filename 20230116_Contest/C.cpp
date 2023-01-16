/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \C.cpp                                                                                     *
* Project: 20230116_Contest                                                                        *
* Created Date: Monday Jan 16th 2023, 1:54:57 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 16/01/2023 06:07:37                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cstring>

using namespace std;

int min(int a, int b){
    if(a < b) return a;
    else return b;
}

using namespace std;

int main(){
    int t, n, i, j;
    long long *res, h, H;
    cin >> t;
    res = new long long[t];
    for(i = 0; i < t; i++){
        H = 0;
        cin >> n;
        for(j = 0; j < n; j++){
            cin >> h;
            if(h > 0) H++;
        }
        res[i] = H;
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }
}