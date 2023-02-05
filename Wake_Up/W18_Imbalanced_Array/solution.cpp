/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \SOLUTION.CPP                                                                              *
* Project: W18_Imbalanced_Array                                                                    *
* Created Date: Sunday Feb 5th 2023, 10:44:57 am                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 5/02/2023 03:51:48                                                                *
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

int main(){
    int n, * a, i, * l, * r, * l1, * r1, * st, top;
    long long ans = 0;
    cin >> n;
    a = new int[n];
    l = new int[n];
    r = new int[n];
    l1 = new int[n];
    r1 = new int[n];
    st = new int[n];

    top = -1;
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
            l[i] = -1;
            st[++top] = i;
        }
        else{
            if(a[i] < a[st[top]]) l[i] = i - 1;
            while(top >= 0 && a[i] >= a[st[top]]){
                l[i] = l[st[top--]];
            };
            st[++top] = i;
        }
    }

    top = -1;
    for(i = n - 1; i >= 0; i--){
        if(i == n - 1){
            r[i] = i + 1;
            st[++top] = i;
        }
        else{
            if(a[i] <= a[st[top]]) r[i] = i + 1;
            while(top >= 0 && a[i] > a[st[top]]){
                r[i] = r[st[top--]];
            };
            st[++top] = i;
        }
    }

    top = -1;
    for(i = 0; i < n; i++){
        if(i == 0){
            l1[i] = -1;
            st[++top] = i;
        }
        else{
            if(a[i] > a[st[top]]) l1[i] = i - 1;
            while(top >= 0 && a[i] <= a[st[top]]){
                l1[i] = l1[st[top--]];
            };
            st[++top] = i;
        }
    }

    for(i = n - 1; i >= 0; i--){
        if(i == n - 1){
            r1[i] = i + 1;
            st[++top] = i;
        }
        else{
            if(a[i] >= a[st[top]]) r1[i] = i + 1;
            while(top >= 0 && a[i] < a[st[top]]){
                r1[i] = r1[st[top--]];
            };
            st[++top] = i;
        }
        ans += (long long)a[i] * (i - l[i]) * (r[i] - i);
        ans -= (long long)a[i] * (i - l1[i]) * (r1[i] - i);
    }
    
    cout << ans << endl;
}