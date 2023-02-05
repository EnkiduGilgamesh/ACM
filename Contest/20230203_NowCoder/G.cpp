/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \G.cpp                                                                                     *
* Project: 20230203_NowCoder                                                                       *
* Created Date: Friday Feb 3rd 2023, 1:09:06 pm                                                    *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 3/02/2023 01:34:40                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k, i, m = 0, j = 0;
    long long sum = 0;
    int * a;
    cin >> n >> k;
    a = new int[n];
    for(i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    for(i = 0; i < k; i++){
        if(a[j] * a[j + 1] > a[n - m - 1] * a[n - m - 2]){
            sum += a[j] * a[j + 1];
            j += 2;
        }
        else{
            sum += a[n - m - 1] * a[n - m - 2];
            m += 2;
        }
    }

    cout << sum << endl;
}