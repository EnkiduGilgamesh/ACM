/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A-solutiion.cpp                                                                           *
* Project: Q5                                                                                      *
* Created Date: Saturday Jan 14th 2023, 10:03:43 am                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 14/01/2023 10:17:40                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>

using namespace std;

int main(){
    int n, k, i, j;
    cin >> n >> k;
    // int * a = (int **)malloc(sizeof(int *) * n);
    // for(i = 0; i < n; i++){
    //     a[i] = (int *)malloc(sizeof(int) * n);
    // }
    int ** a = new int*[n];
    for(i = 0; i < n; i++){
        a[i] = new int[n];
    }
    for(j = 0; j < n; j++){
        if(j < n - 1) a[0][j] = k / n;
        else a[0][j] = k - k / n * (n - 1);
    }

    for(i = 1; i < n; i++){
        for(j = 0; j < n; j++){
            a[i][j] = a[0][(j + i) % n];
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << a[i][j];
            if(j < n - 1) cout << " ";
            else cout << endl;
        }
    }

    return 0;
}