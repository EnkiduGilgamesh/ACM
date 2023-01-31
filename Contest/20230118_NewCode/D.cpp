/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \D.cpp                                                                                     *
* Project: 20230118_Contest                                                                        *
* Created Date: Wednesday Jan 18th 2023, 1:40:11 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 18/01/2023 02:23:39                                                               *
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

#define INF 0x3f3f3f3f + 10

typedef double db;
typedef long long ll;

int * f, * depth;

int getD(int x, int * f){
    if(x == 0) return 1;
    return getD(f[x], f) + 1;
}

bool cmpD(int x, int y){
    return depth[x] > depth[y];
}

int main(){
    int n, i, j, * v, * energy, * q, sum = 0;
    cin >> n;
    f = new int[n];
    v = new int[n];
    depth = new int[n];
    energy = new int[n];
    q = new int[n];

    memset(energy, 0, sizeof(int) * n);

    f[0] = 0;
    for(i = 1; i < n; i++){
        cin >> f[i];
        f[i]--;
    }
    for(i = 0; i < n; i++){
        cin >> v[i];
    }

    for(i = 0; i < n; i++){
        q[i] = i;
    }

    sort(v, v + n, greater<int>());

    depth[0] = 1;
    for(i = 0; i < n; i++){
        depth[i] = getD(i, f);
    }

    sort(q, q + n, cmpD);

    // for(i = 0; i < n; i++){
    //     cout << q[i] << endl;
    // }

    // for(i = 0; i < n; i++){
    //     cout << v[i] << endl;
    // }

    // for(i = 0; i < n; i++){
    //     cout << energy[i] << endl;
    // }


    for(i = 0; i < n; i++){
        energy[q[i]] += v[i];
        if(q[i] != 0)
            energy[f[q[i]]] += energy[q[i]];
    }

    for(i = 0; i < n; i++){
        sum += energy[i];
    }

    // for(i = 0; i < n; i++){
    //     cout << energy[i] << endl;
    // }

    cout << sum << endl;


    return 0;
}