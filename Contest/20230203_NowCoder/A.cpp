/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230203_NowCoder                                                                       *
* Created Date: Friday Feb 3rd 2023, 1:02:02 pm                                                    *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 3/02/2023 01:04:49                                                                *
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
    int x;
    cin >> x;

    if(x <= 7) cout << "very easy" << endl;
    else if(x <= 233) cout << "easy" << endl;
    else if(x <= 10032) cout << "medium" << endl;
    else if(x <= 114514) cout << "hard" << endl;
    else if(x <= 1919810) cout << "very hard" << endl;
    else cout << "can not imagine" << endl;

    return 0;
}