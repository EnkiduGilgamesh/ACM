/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \L.cpp                                                                                     *
* Project: 20230130_NewCode                                                                        *
* Created Date: Monday Jan 30th 2023, 2:14:07 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 30/01/2023 02:53:0                                                                *
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
#include <cstring>

using namespace std;

int main(){
    int t, v[3], i, j;
    
    cin >> t;
    vector<vector<int>> l(t, vector<int>(3));
    int * nans = new int[t];
    memset(nans, 0, sizeof(int) * t);

    for(i = 0; i < t; i++){
        cin >> v[0] >> v[1] >> v[2];
        for(j = 0; j < 3; j++){
            if(3 * v[j] <= v[(j + 1) % 3] + v[(j + 2) % 3] ||\
                (v[(j + 1) % 3] + v[(j + 2) % 3] - v[j]) % 2 != 0){
                    nans[i] = 1;
                    break;
            }
        }
        if(!nans[i]){
            for(j = 0; j < 3; j++){
                l[i][j] = (v[(j + 1) % 3] + v[(j + 2) % 3] - v[j]) / 2;
            }
        }
    }

    for(i = 0; i < t; i++){
        if(nans[i]){
            cout << "No" << endl;
            continue;
        }
        else{
            cout << "Yes" << endl;
            cout << l[i][0] << " " << l[i][1] << " " << l[i][2] << endl;
        }
    }

    return 0;
}
