/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \M.cpp                                                                                     *
* Project: 20230116_Contest                                                                        *
* Created Date: Monday Jan 16th 2023, 2:44:59 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 16/01/2023 03:24:54                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int m, n, ave, o, k = 0;
    double good = 0.0;
    cin >> n >> m;
    if(n == 1){
        cout << 1.0 << endl;
        return 0;
    }
    if(m < n) ave = 1, o = 0;
    else ave = (m - 1) / (n - 1), o = (m - 1) % (n - 1);
    while((m - ave) > 0){
        if(k < (n - 1 - o)){
            good += (double)ave / m;
        }
        else good += (double)(ave + 1) / m;
        m -= ave;
    }
    good++;
    cout.precision(15);
    // printf("%f", good)
    // good = ((double)m - 1.0) / m + 1.0
    cout << good << endl;
    
    return 0;
}