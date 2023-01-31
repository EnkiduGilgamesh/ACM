/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \D.cpp                                                                                     *
* Project: 20230120_Conrtest                                                                       *
* Created Date: Friday Jan 20th 2023, 2:29:35 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 20/01/2023 02:31:14                                                               *
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
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

#define INF 0x3f3f3f3f

typedef double db;
typedef long long ll;

int main(){
    ll n;

    cin >> n;

    if(n % 2) cout << "yukari" << endl;
    else cout << "kou" << endl;

    return 0;
}