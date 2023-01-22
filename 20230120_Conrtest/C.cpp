/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \C.cpp                                                                                     *
* Project: 20230120_Conrtest                                                                       *
* Created Date: Friday Jan 20th 2023, 2:36:18 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 20/01/2023 03:33:52                                                               *
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
    int n, i, k1, k, j, * res, temp;
    int a1[14] = {0, 3, 4, 1, 2, 7, 8, 5, 6, 12, 13, 9, 10, 11};
    int a2[9] = {0, 3, 4, 1, 2, 7, 8, 5, 6};
    int a3[10] = {0, 3, 4, 1, 2, 8, 9, 5, 6, 7};
    int a4[5] = {0, 3, 4, 1, 2};
    int a5[6] = {0, 4, 5, 1, 2, 3};
    cin >> n;

    res = new int[n + 1];

    if(n <= 3 || n == 7){
        cout << -1 << endl;
        return 0;
    }

    if(n <= 3){
        cout << -1 << endl;
        return 0;
    }

    for(i = 0; i <= n; i++){
        res[i] = i;
    }

    k1 = n % 6;

    switch(k1){
        case 0:
            k = 1;
            break;
        case 1:
            for(k = 0; k < 14; k++){
                res[k] = a1[k];
            }
            break;
        case 2:
            for(k = 0; k < 9; k++){
                res[k] = a2[k];
            }
            break;
        case 3:
            for(k = 0; k < 10; k++){
                res[k] = a3[k];
            }
            break;
        case 4:
            for(k = 0; k < 5; k++){
                res[k] = a4[k];
            }
            break;
        case 5:
            for(k = 0; k < 6; k++){
                res[k] = a5[k];
            }
            break;
    }

    while(k < n){
        j = 0;
        while(j < 3){
            temp = res[k];
            res[k] = res[k + 3];
            res[k + 3] = temp;
            k++, j++;
        }
        k += 3;
    }

    for(i = 1; i <= n; i++){
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}