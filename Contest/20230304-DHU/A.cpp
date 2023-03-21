/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230304-DHU                                                                            *
* Created Date: Saturday Mar 4th 2023, 3:26:12 pm                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 4/03/2023 03:33:1                                                                 *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

int n, * a, * sa;
long long * ans;

void solve(){
    for(int i = 0; i < n; i++){
        if(a[i] != sa[0]){
            ans[i] = (long long)a[i] + sa[0];
        }
        else ans[i] = (long long)a[i] + sa[1];

        cout << ans[i] << " ";
    }
}

int main(){
    cin >> n;
    int i;
    a = new int[n];
    sa = new int[n];
    ans = new long long[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
        sa[i] = a[i];
    }

    sort(sa, sa + n, greater<int>());
    solve();
    cout << endl;

    return 0;
}
