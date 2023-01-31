/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \E.cpp                                                                                     *
* Project: 20230116_Contest                                                                        *
* Created Date: Monday Jan 16th 2023, 4:51:55 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 17/01/2023 03:47:55                                                               *
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

using namespace std;

double eps = 1e-5;

int main(){
    int t, xa, ya, xb, yb, xc, yc, i, * res;
    double xd, yd, xe, ye, xf, yf, xg, yg, xh, yh, distAB, distCB, distDE, distFE;

    cin >> t;
    res = new int[t];
    for(i = 0; i < t; i++){
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        cin >> xd >> yd >> xe >> ye >> xf >> yf;    

        distAB = sqrt(((xa - xb)  * (xa - xb) + (ya - yb) * (ya - yb)));
        distDE = sqrt(((xd - xe)  * (xd - xe) + (yd - ye) * (yd - ye)));
        distCB = sqrt(((xc - xb)  * (xc - xb) + (yc - yb) * (yc - yb)));
        distFE = sqrt(((xf - xe)  * (xf - xe) + (yf - ye) * (yf - ye)));
        if(distAB == distCB){
            res[i] = 0;
            continue;
        }
        if(abs(distDE - distAB) + abs(distFE - distCB) < \
            abs(distFE - distAB) + abs(distDE - distCB)){
                xg = xd, yg = yd;
                xh = xf, yh = yf;
            }
        else{
                xg = xf, yg = yf;
                xh = xd, yh = yd;
            }

        if(((xa - xb) * (yc - yb) - (ya - yb) * (xc - xb)) * \
            ((xg - xe) * (yh - ye) - (yg - ye) * (xh - xe)) < 0){
                res[i] = 1;
        }
        else res[i] = 0;
        
    }

    for(i = 0; i < t; i++){
        if(res[i])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}