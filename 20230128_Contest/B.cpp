/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \B.cpp                                                                                     *
* Project: 20230128_Contest                                                                        *
* Created Date: Saturday Jan 28th 2023, 2:04:21 pm                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 28/01/2023 06:37:48                                                               *
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
    int t, n, i, j;
    int * ans;

    cin >> t;
    ans = new int[t];
    for(i = 0; i < t; i++){
        cin >> n;
        if(n <= 5) ans[i] = n;
        else if(n <= 10) ans[i] = 5;
        else if(n <= 12) ans[i] = 6;
        else{
            j = n % 13;
            if(j == 0) ans[i] = n / 13 * 6;
            else if(j <= 1) ans[i] = n / 13 * 6 + 1;
            else if(j <= 3) ans[i] = n / 13 * 6 + 2;
            else if(j <= 4) ans[i] = n / 13 * 6 + 3;
            else if(j <= 7) ans[i] = n / 13 * 6 + 4;
            else if(j <= 10) ans[i] = n / 13 * 6 + 5;
            else ans[i] = n / 13 * 6 + 6;
        }
    }

    for(i = 0; i < t; i++){
        cout << ans[i] << endl;
    }

    return 0;
}