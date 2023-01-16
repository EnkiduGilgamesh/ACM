/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \D.cpp                                                                                     *
* Project: 20230114_Contest                                                                        *
* Created Date: Saturday Jan 14th 2023, 11:16:25 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 15/01/2023 07:53:28                                                               *
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
    string color = "ROYGBIV";
    string ans;

    int n, i;
    cin >> n;

    for(i = 0; i < n && i < 7; i++){
        ans += color[i % 7];
    }

    if(n > 7){
        for(i = 7; i < n; i++){
            ans += color[(i - 7) % 4 + 3];
        }
    }

    cout << ans << endl;

    return 0;
}