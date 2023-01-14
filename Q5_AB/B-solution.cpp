/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \B-solution.cpp                                                                            *
* Project: Q5_AB                                                                                   *
* Created Date: Saturday Jan 14th 2023, 10:22:27 am                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 14/01/2023 03:55:54                                                               *
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

#define MAXSIZE 200000

bool isPrime(int n){
    int i;
    double s = sqrt(double(n));
    if(n == 1) return false;
    if(n == 2) return true;

    for(i = 2; i <= s; i++)
        if(!(n % i)) return false;
    
    return true;
}

int main(){
    int t, n, e, i, k, l, m, b, *res, a[MAXSIZE];
    cin >> t;
    res = new int[t];
    for(l = 0; l < t; l++){
        res[l] = 0;
        cin >> n >> e;
        for(m = 0; m < n; m++){
            cin >> a[m];
        }

        for(int i = 1; i <= n; i++){
            b = a[i - 1];
            for(int k = 1; i + k * e <= n; k++){
                // b *= a[i - 1 + k * e];                  // ERROR: overflow.
                // if(isPrime(b)) res[l]++;
                // cout << i << " " << k << " " << b << " " << isPrime(b) << endl;
                if(a[i - 1 + k * e] == 1 && b == 1) continue;
                else if((isPrime(a[i - 1 + k * e]) && b == 1) \
                        || (isPrime(b) && a[i - 1 + k * e] == 1)){
                    res[l]++;
                    b *= a[i - 1 + k * e];
                }
                else break;                                // ERROR: time limit exceed
            }
        }
    }

    for(l = 0; l < t; l++) cout << res[l] << endl;
    
    return 0;
}