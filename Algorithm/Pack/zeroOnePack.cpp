/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \zeroOnePack.cpp                                                                           *
* Project: Pack                                                                                    *
* Created Date: Tuesday Jan 31st 2023, 4:08:46 pm                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 31/01/2023 04:34:17                                                               *
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

#define N 100
#define V 100

typedef int worth;
typedef int vol;

worth w[N];
vol v[N];

worth F[V] = {0};

// the elements' worth is storaged in w,
// the elements' volume is storaged in v,
// we can put in up to maxN elements in the pack having a volume equal to maxV.
worth zeroOnePack(worth * F, worth * w, vol * v, int maxN, int maxV){
    for(int i = 0; i < maxN; i++){
        for(int j = maxV; j >= v[i]; j--){
            F[j] = max(F[j], F[j - v[i]] + w[i]);
        }
    }

    worth ans = F[maxV];
    return ans;
}