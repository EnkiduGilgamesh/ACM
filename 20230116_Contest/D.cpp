/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \D.cpp                                                                                     *
* Project: 20230116_Contest                                                                        *
* Created Date: Monday Jan 16th 2023, 3:37:57 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 16/01/2023 04:51:46                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int xp, yp;

bool cmp(vector<int> a, vector<int> b){
    return (a[0] - xp) * (a[0] - xp) + (a[1] - yp) * (a[1] - yp) > \
            (b[0] - xp) * (b[0] - xp) + (b[1] - yp) * (b[1] - yp);
}


int main(){
    int t, x, y, s1, s2, i, x1, y1;
    double p, *res;
    cin >> t;
    res = new double[t];
    for(i = 0; i < t; i++){
    
        cin >> x >> y >> xp >> yp;

        vector<vector<int>> point(4, vector<int>(2));
        point[0][0] = 0;
        point[0][1] = 0;
        point[1][0] = x;
        point[1][1] = 0;
        point[2][0] = 0;
        point[2][1] = y;
        point[3][0] = x;
        point[3][1] = y;

        sort(point.begin(), point.end(), cmp);

        // cout << point[0][0] << ", " << point[0][1] << endl;

        x1 = xp > x ? x : xp;
        y1 = yp > y ? y : yp;

        s1 = abs(x1 - point[0][0]) * abs(y1 - point[0][1]);

        s2 = x * y + abs(xp - point[0][0]) * abs(yp - point[0][1]) - s1;

        // cout << s1 << " " << s2 << endl;

        res[i] = (double)s1 / s2;

    }
    cout.precision(10);
    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }

    return 0;
}