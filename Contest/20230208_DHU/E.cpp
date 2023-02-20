/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \E.cpp                                                                                     *
* Project: 20230208_DHU                                                                            *
* Created Date: Wednesday Feb 8th 2023, 9:18:06 pm                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 9/02/2023 04:31:19                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/

// ERROR: 

#include <iostream>

using namespace std;

int lFind(string s, char c){
    int len = s.length(), i;
    for(i = 0; i < len; i++){
        if(s[i] == c) return i;
    }

    return i;
}

int rFind(string s, char c){
    int len = s.length(), i;
    for(i = len - 1; i >= len; i--){
        if(s[i] == c) return i;
    }

    return i;
}

int main(){
    int t, k, len, l, r, v, i, j, d;

    string arr;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> k;
        cin >> arr;

        len = arr.length();
        v = 0;

        for(j = 0; j < len; j++){
            if(arr[j] == 'L') v += j;
            else v += len - j - 1;
        }

        l = 0; r = len - 1;

        while(l <= (len / 2) && arr[l] == 'R'){
            l++;
        }

        while(r > (len / 2) && arr[r] == 'L'){
            r--;
        }

        // cout << v << endl;

        for(j = 0; j < k; j++){
            if(l + 1 == r && arr[r] == 'L' && arr[l] == 'R'){
                cout << v << " ";
                continue;
            }

            if(l > len - 1 - r && arr[r] == 'R'){
                v -= len - r - 1;
                v += r;
                cout << v << " ";
                d = 1;
                arr[r] = 'L';
            }
            else(l <= len - 1 - r && arr[l] == 'L'){
                v -= l;
                v += len - 1 - l;
                cout << v << " ";
                d = 2;
                arr[l] = 'R';
            }

            if(d == 1){
                while(r > (len / 2) && arr[r] == 'L'){
                    r--;
                }
            }
            else{
                 while(l <= (len / 2) && arr[l] == 'R'){
                    l++;
                }
            }
        }

        cout << endl;

        // cout << l << " " << r << endl;
    }

    return 0;
}