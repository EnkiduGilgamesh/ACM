/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \E.cpp                                                                                     *
* Project: 20230120_NewCode                                                                        *
* Created Date: Sunday Feb 5th 2023, 10:43:22 am                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 5/02/2023 10:43:57                                                                *
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

// ERROR: 95% accepted

int main(){
    int xa, xb, ya, yb, xc, yc;

    cin >> xa >> ya >> xb >> yb;

    if((xa + xb - ya + yb) % 2 || (ya + yb + xa - xb) % 2)
        cout << "No Answer!" << endl;
    else{
        xc = (xa + xb - ya + yb) / 2;
        yc = (ya + yb + xa - xb) / 2;
        cout << xc << " " << yc << endl;
    }

    return 0;

}