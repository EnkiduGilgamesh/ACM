/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \primeFilter.cpp                                                                           *
* Project: PrimeFilter                                                                             *
* Created Date: Tuesday Jan 31st 2023, 1:58:31 pm                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 31/01/2023 02:08:54                                                               *
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
// and the prime numbers' quantity is primeNum, 
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