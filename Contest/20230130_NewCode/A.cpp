/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230130_NewCode                                                                        *
* Created Date: Monday Jan 30th 2023, 1:54:55 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 30/01/2023 02:00:7                                                                *
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
#include <algorithm>

using namespace std;

// int min(int x, int y){

// }

int main(){
    long long x, y;
    
    cin >> x >> y;

    double l, r;

    if(x == y){
        cout << x << endl;
    }

    else{
        l = y * log(x);
        r = x * log(y);

        if(l > r) cout << x << endl;
        else if(l < r) cout << y << endl;
        else cout << min(x, y) << endl;
    }

    return 0;
}