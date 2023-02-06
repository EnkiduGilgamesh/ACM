/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W19_Range_and_Partition                                                                 *
* Created Date: Monday Feb 6th 2023, 10:30:53 am                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 6/02/2023 11:00:43                                                                *
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

int main(){
    int t, i, n, k, * a, * sa, j, x, y, l, r, cnt, d, sc;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n >> k;
        a = new int[n];
        sa = new int[n];
        for(j = 0; j < n; j++){
            cin >> a[j];
            sa[j] = a[j];
        }

        sort(sa, sa + n);
        cnt = (n + k + 1) / 2;
        x = sa[0];
        y = sa[n - 1];
        d = y - x;

        for(j = 0; j + cnt - 1 < n; j++){
            if(d > sa[j + cnt - 1] - sa[j]){
                x = sa[j];
                y = sa[j + cnt - 1];
                d = sa[j + cnt - 1] - sa[j];
            }
        }

        cout << x << " " << y << endl;

        sc = 0;
        l = r = 1;

        for(j = 0; j < n && k > 0; j++){
            if(a[j] >= x && a[j] <= y) sc++;
            else sc--;

            if(sc > 0){
                if(--k == 0) r = n;
                cout << l << " " << r << endl;
                l = r = j + 2;
                sc = 0;
            }
            else{
                r++;
            }
        }
    }

    return 0;

}