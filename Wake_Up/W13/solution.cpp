/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W13                                                                                     *
* Created Date: Tuesday Jan 31st 2023, 9:33:49 am                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 31/01/2023 09:41:5                                                                *
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

using namespace std;

int main(){
    int t, n, i;
    cin >> t;

    int * njudge = new int[t];
    int (* ans)[2] = new int[t][2];

    memset(njudge, 0, sizeof(int) * t);

    for(i = 0; i < t; i++){
        cin >> n;

        if(n % 2 != 0){
            njudge[i] = 1;
            continue;
        }
        else{
            ans[i][0] = 1;
            ans[i][1] = n / 2;
        }
    }

    for(i = 0; i < t; i++){
        if(!njudge[i]) cout << ans[i][0] << " " << ans[i][1] << endl;
        else cout << -1 << endl;
    }

    return 0;
}