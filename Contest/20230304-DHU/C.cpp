/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \C.cpp                                                                                     *
* Project: 20230304-DHU                                                                            *
* Created Date: Saturday Mar 4th 2023, 4:32:40 pm                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 4/03/2023 05:31:27                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cstring>
#include <map>

using namespace std;

map<string, int> pot;
map<string, int>::iterator it;

char * s = new char[100010];
char * token, * ptr;
string mat;
int num, t;

int main(){
    cin.getline(s, 100000);

    token = strtok_s(s, " ", &ptr);

    while(token != NULL){
        mat = token;
        if(pot.find(mat) == pot.end()) pot[mat] = 0;
        token = strtok_s(NULL, " ", &ptr);
        num = atoi(token);
        token = strtok_s(NULL, " ", &ptr);
        pot[mat] += num;
    }

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> mat;
        it = pot.find(mat);
        if(it != pot.end() && pot[mat] > 0)
            cout << pot[mat]-- << endl;
        else
            cout << 0 << endl;
    }

    cout << endl;

    return 0;
}