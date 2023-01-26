/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W8                                                                                      *
* Created Date: Tuesday Jan 17th 2023, 10:12:25 am                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 17/01/2023 11:46:55                                                               *
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
#include <vector>
#include <cstring>

using namespace std;

int main(){
    int t, i, j, flag1, flag2, len, p1, p2, size, * res;
    string s;

    cin >> t;
    res = new int[t];
    memset(res, 0, sizeof(int) * t);
    vector<vector<int>> pos(t);

    for(i = 0; i < t; i++){
        cin >> s;
        flag1 = flag2 = 0;

        len = s.length();

        j = 0;
        while(j < len){
            if(s.substr(j, 3) == "two"){
                res[i]++;
                if(s.substr(j, 5) == "twone"){
                    pos[i].push_back(j + 3);
                    j += 5;
                }
                else{
                    pos[i].push_back(j + 2);
                    j += 3;
                }
            }
            else if(s.substr(j, 3) == "one"){
                res[i]++;
                pos[i].push_back(j + 2);
                j += 3;
            }
            else j++;
        }
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
        size = pos[i].size();
        for(j = 0; j < size; j++){
            cout << pos[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;
}