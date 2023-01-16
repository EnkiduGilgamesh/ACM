/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \F.cpp                                                                                     *
* Project: 20230114_Contest                                                                        *
* Created Date: Monday Jan 16th 2023, 10:41:47 am                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 16/01/2023 11:47:53                                                               *
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

using namespace std;

#define MAXSIZE 3000000

bool isPrime[MAXSIZE];
long long prime[MAXSIZE], primeNum = 0;

void eulerFilter(long long max){
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    int i, j;
    for(i = 2; i <= max; i++){
        if(isPrime[i])
            prime[primeNum++] = i;
        for(j = 0; j < primeNum && i * prime[j] <= max; j++){
            isPrime[i * prime[j]] = false;
            if(!(i % prime[j])) break;
        }
    }
}

int main(){
    eulerFilter(2100000);
    int t, i, j;
    long long n, m, (*res)[2];
    cin >> t;
    res = new long long[t][2];
    for(i = 0; i < t; i++){
        cin >> n;
        for(j = 0; j < primeNum; j++){
            m = n / prime[j];
            if(!(n % prime[j])){
                if(!(m % prime[j])){
                    res[i][0] = prime[j];
                    res[i][1] = n / (prime[j] * prime[j]);
                    break;
                }
                else{
                    res[i][0] = (long long)sqrt(n / prime[j]);
                    res[i][1] = prime[j];
                    break;
                }
            }
            else continue;
        }
    }

    for(i = 0; i < t; i++){
        cout << res[i][0] << " " << res[i][1] << endl;
    }

    return 0;
}