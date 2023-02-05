/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W18_Average_Height                                                                      *
* Created Date: Sunday Feb 5th 2023, 10:32:01 am                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 5/02/2023 10:40:26                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int ans[500][2000];

int main(){
    int t, n[500], l, r, i, j, a;
    cin >> t;
    
    for(i = 0; i < t; i++){
        cin >> n[i];
        l = 0; r = n[i] - 1;
        for(j = 0; j < n[i]; j++){
            cin >> a;
            if(a % 2) ans[i][l++] = a;
            else ans[i][r--] = a;
        }
    }

    for(i = 0; i < t; i++){
        for(j = 0; j < n[i]; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}