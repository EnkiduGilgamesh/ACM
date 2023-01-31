/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \B.cpp                                                                                     *
* Project: 20230114_Contest                                                                        *
* Created Date: Saturday Jan 14th 2023, 10:04:58 pm                                                *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 14/01/2023 10:51:40                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#define MAXN 0x3f3f3f3f

bool inYes(char c){
    if(c != 'Y' && c != 'e' && c != 's')
        return false;
    else return true;
}

int main(){
    int t, i, j, len, flag;
    int * res;
    string ans;
    char pre, cur;
    cin >> t;
    res = new int[t];
    memset(res, 0, sizeof(int) * t);
    // for(i = 0; i < t; i++) cout << res[i] << " ";
    // cout << endl;
    for(i = 0; i < t; i++){
        flag = 0;
        cin >> ans;
        len = ans.length();
        pre = ans[0];
        if(!inYes(pre)) continue;
        else{
            for(j = 1; j < len; j++){
                cur = ans[j];
                if(!inYes(cur)){
                    flag = 1;
                    break;
                }
                else{
                    if(pre == 'Y'){
                        if(cur != 'e'){
                            flag = 1;
                            break;
                        }
                    }
                    else if(pre == 'e'){
                        if(cur != 's'){
                            flag = 1;
                            break;
                        }
                    }
                    else if(pre == 's'){
                        if(cur != 'Y'){
                            flag = 1;
                            break;
                        }
                    }
                }
                pre = cur;
            }
        }
        if(flag) continue;
        else res[i] = 1;
    }

    for(i = 0; i < t; i++){
        if(res[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}