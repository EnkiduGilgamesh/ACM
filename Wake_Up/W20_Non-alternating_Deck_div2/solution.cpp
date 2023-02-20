/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W20_Non-alternating_Deck_div2                                                           *
* Created Date: Tuesday Feb 7th 2023, 10:02:08 am                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 8/02/2023 08:52:28                                                                *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/

//TODO:

#include <iostream>
#include <cstring>

using namespace std;

long long fa[1000100];

void initFa(){
    int i, cc = 0, c = 1, a = 1;
    memset(fa, 0, sizeof(long long) * 1000100);

    for(i = 1; i < 1000100; i++){
        if(a == 1){
            fa[i] = fa[i - 1] + 1;
        }
        else fa[i] = fa[i - 1];

        if(++cc == c){
            a = -a + 1;
            cc = 0;
            c += 4;
        }
    }
}

int main(){
    int t, i, n;

    initFa();

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n;

        cout << fa[n] << " " << n - fa[n] << endl;
    }

    return 0;
}