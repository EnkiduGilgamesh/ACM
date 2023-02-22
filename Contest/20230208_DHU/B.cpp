/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \B.cpp                                                                                     *
* Project: 20230208_DHU                                                                            *
* Created Date: Wednesday Feb 8th 2023, 8:48:26 pm                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 8/02/2023 08:53:7                                                                 *
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
    int t, n, i, j, min;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n;

        min = 9;

        if(n < 100){
            cout << n% 10 << endl;
            continue;
        }
        
        while(n > 0){
            if(min > n % 10){
                min = n % 10;
            }
            n /= 10;
        }

        cout << min << endl;
    }

    return 0;
}