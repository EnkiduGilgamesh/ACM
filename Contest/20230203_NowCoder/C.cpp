/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \C.cpp                                                                                     *
* Project: 20230203_NowCoder                                                                       *
* Created Date: Friday Feb 3rd 2023, 2:02:24 pm                                                    *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 3/02/2023 02:45:49                                                                *
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

int mod = 1e9 + 7;

int packSum(int * a, int len){
    if(len == 1) return a[0] % mod;
    else if(len == 2) return (a[0] % mod + a[1] % mod) % mod;
    else{
        for(int i = 0; i < len - 1; i++){
            a[i] = (a[i] % mod + a[i + 1] % mod) % mod;
        }
        return packSum(a, len - 1);
    }
}

int main(){
    int n, i, l = 0, r, * a, * t;

    cin >> n;
    r = n - 1;
    a = new int[n];
    t = new int[n];

    for(i = 0; i < n; i++){
        if(!(i % 2)){
            a[l] = i + 1;
            t[l] = i + 1;
            l++;
        }
        else{
            a[r] = i + 1;
            t[r] = i + 1;
            r--;
        }
    }

    cout << packSum(a, n) << endl;

    for(i = 0; i < n; i++){
        cout << t[i] << " ";
    }
    cout << endl;

    return 0;

}