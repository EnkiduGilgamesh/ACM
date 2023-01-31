/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \H.cpp                                                                                     *
* Project: 20230118_Contest                                                                        *
* Created Date: Wednesday Jan 18th 2023, 3:27:13 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 18/01/2023 04:13:56                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/

// ERROR: tle
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <map>

using namespace std;

#define INF 0x3f3f3f3f

typedef double db;
typedef long long ll;

int main(){
    set<int> num;
    int t, n, i, j, k, a;
    cin >> t;
    vector<int> res;
    vector<int>::iterator itr;
    map<int, int> m;
    map<int, int>::iterator itm;

    for(i = 0; i < t; i++){
        
        cin >> n;
        for(j = 0; j < n; j++){
            cin >> a;
            if(m.find(a) != m.end()){
                m[a]++;
            }
            else m[a] = 1;
        }
        for(j = 0; j < n; j++){
            k = n;
            for(itm = m.begin(); itm != m.end(); itm++){
                // cout << itm->first <<" :number: " << itm->second << endl;
                if(itm->second > j + 1) k -= itm->second - j;
            }
            res.push_back(k);
        }
        m.clear();
    }
        for(itr = res.begin(); itr != res.end(); itr++){
            cout << *itr << endl;
        }

    return 0;
}
