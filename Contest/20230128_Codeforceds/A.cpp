/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \A.cpp                                                                                     *
* Project: 20230128_Contest                                                                        *
* Created Date: Saturday Jan 28th 2023, 1:23:04 pm                                                 *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 28/01/2023 02:00:19                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;


int main(){
    int n, i, k = 0;
    string name1, name2;
    map<string, bool> rlt;
    set<string> frd;
    set<string>::iterator iter;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> name1 >> name2;
        if(name2 != "No"){
            rlt[name1] = true;
            frd.insert(name2);
            k++;
        }
        else{
            rlt[name1] = false;
        }
    }

    for(iter = frd.begin(); iter != frd.end(); iter++){
        if(rlt.find(*iter) != rlt.end() && rlt[*iter] == false) k++;
    }

    cout << n - k << endl;

    return 0;
}