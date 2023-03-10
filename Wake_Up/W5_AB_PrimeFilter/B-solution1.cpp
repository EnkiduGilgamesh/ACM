/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \B-solution1.cpp                                                                           *
* Project: W5_AB_PrimeFilter                                                                       *
* Created Date: Saturday Jan 14th 2023, 2:43:42 pm                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 16/01/2023 11:25:43                                                               *
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

#define MAXSIZE 30000000

bool isPrime[MAXSIZE];
int prime[MAXSIZE], primeNum = 0;                // a array to storage prime numbers 

// filtrate if the number is prime under maximum max(inlcuding max), 
// and the prime numbers' number is primeNum, 
// all of them are storaged in prime array
void eratosthenesFilter(int max){  
    memset(isPrime, true, sizeof(isPrime));              
    isPrime[0] = isPrime[1] = false;
    int i, j;
    for(i = 2; i <= max; i++){
        if(isPrime[i]){
            prime[primeNum++] = i;
            for(j = i * i; j <= max; j += i)
                isPrime[j] = false;
        }
    }
}

void eulerFilter(int max){
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

bool isPrimePlain(int n){
    int i;
    double s = sqrt(double(n));
    if(n == 1) return false;
    if(n == 2) return true;

    for(i = 2; i <= s; i++)
        if(!(n % i)) return false;
    
    return true;
}

int main(){
    // int t, n, e, i, k, l, r, c, m, *res, a[MAXSIZE];
    // eulerFilter(MAXSIZE);
    // cin >> t;
    // res = new int[t];
    // for(l = 0; l < t; l++){
    //     res[l] = 0;
    //     cin >> n >> e;
    //     for(m = 0; m < n; m++){
    //         cin >> a[m];
    //     }
    //     for(m = 0; m < n; m++){
    //         l = m = 0;
    //         if(isPrime[a[m]]){
    //             c = m - e;
    //             while(l){
    //                 if(a[l] == 1) 
    //             }
    //         }
    //     }
    // }

    eulerFilter(2100000);

    for(int i =  0; i < primeNum; i++){
        cout << prime[i] << " ";
    }
    return 0;

}