/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A-solution1.cpp                                                                           *
* Project: W6_AB                                                                                   *
* Created Date: Sunday Jan 15th 2023, 10:37:53 am                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 15/01/2023 11:02:14                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, int> cnt;
    map<int, int>::iterator it;

    int n, i, j, a, m, res = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a;
        a %= 200;
        if(cnt.find(a)->second) cnt.find(a)->second++;
        else cnt[a] = 1;
    }
    it = cnt.begin();
    while(it != cnt.end()){
        m = it->second;
        res += m * (m - 1) / 2;
        it++;
    }
    
    cout << res << endl;

    return 0;
}