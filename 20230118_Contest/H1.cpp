/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \H1.cpp                                                                                    *
* Project: 20230118_Contest                                                                        *
* Created Date: Wednesday Jan 18th 2023, 4:15:47 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 18/01/2023 05:20:2                                                                *
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
#include <vector>

using namespace std;

#define INF 0x3f3f3f3f

typedef double db;
typedef long long ll;

int main(){
    int t, n, i, j, k, * a, * num;
    cin >> t;
    vector<int> res;
    vector<int>::iterator itr;

    for(i = 0; i < t; i++){
        
        cin >> n;
        a = new int[n];
        num = new int[n];
        for(j = 0; j < n; j++){
            cin >> a[j];
        }

        sort(a, a + n);

        int cur, fa, de, res;
        res = n, cur = a[0], fa = 1, de = 0;
        for(j = 1; j < n; j++){
            if(a[j] != cur){
                if(fa > n)
                cur = a[j];
                
            }
        }


    return 0;
}