/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W17_Balanced_Remainders                                                                 *
* Created Date: Saturday Feb 4th 2023, 10:09:17 am                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 4/02/2023 10:47:51                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int t, n, n3, a, c[3], i, j;
    long long * move;

    cin >> t;
    move = new long long[t];
    memset(move, 0, sizeof(long long) * t);
    for(i = 0; i < t; i++){
        cin >> n;
        n3 = n / 3;
        memset(c, 0, sizeof(int) * 3);
        for(j = 0; j < n; j++){
            cin >> a;
            c[a % 3]++;
        }
        while(c[0] > n3 || c[1] > n3 || c[2] > n3){
            move[i]++;
            if(c[0] < n3){
                c[0]++;
                c[2]--;
            }
            else if(c[1] < n3){
                c[1]++;
                c[0]--;
            }
            else{
                c[2]++;
                c[1]--;
            }
        }
    }

    for(i = 0; i < t; i++){
        cout <<  move[i] << endl;
    }

    return 0;
}