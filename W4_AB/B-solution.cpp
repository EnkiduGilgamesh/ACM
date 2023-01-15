/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \B-solution.cpp                                                                            *
* Project: Q4_Create_Palindromic                                                                   *
* Created Date: Friday Jan 13th 2023, 3:38:56 pm                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 13/01/2023 05:22:18                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int office;

bool cmp(int a, int b){
    return abs(a - office) < abs(b - office);
}

int main(){
    int p, k, i, maxTime = 0;
    
    cin >> p >> k >> office;

    vector<int> P(p);
    vector<int> K(k);
    vector<int> time(p);

    for(i = 0; i < p; i++) cin >> P[i];
    for(i = 0; i < k; i++) cin >> K[i];

    sort(P.begin(), P.end());
    sort(K.begin(), K.end(), cmp);
    sort(K.begin(), K.begin() + p);

    for(i = 0; i < p; i++){
        time[i] = abs(office - K[i]) + abs(K[i] - P[i]);
    }
    for(i = 0; i < p; i++){
        cout << "p: " << P[i];
    }

    cout << endl;

    for(i = 0; i < p; i++){
        cout << "k: " << K[i];
    }

    cout << endl;

    for(i = 0; i < p; i++){
        if(maxTime < time[i]) maxTime = time[i];
    }

    cout << maxTime;

    return 0;
}
