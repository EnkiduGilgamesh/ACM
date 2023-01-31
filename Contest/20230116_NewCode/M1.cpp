/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \M1.cpp                                                                                    *
* Project: 20230116_Contest                                                                        *
* Created Date: Wednesday Jan 18th 2023, 11:21:00 am                                               *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 18/01/2023 11:55:19                                                               *
* Modified By: Wenren Muyan                                                                        *
* --------------------------------------------------------------------------------                 *
* Copyright (c) 2023 - future Wenren Muyan                                                         *
* --------------------------------------------------------------------------------                 *
* HISTORY:                                                                                         *
* Date				By				Comments                                                       *
* --------------------------------------------------------------------------------                 *
***************************************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

double dp[510][510];

int main(){
    int n, m, i, j, k;
    cin >> n >> m;
    
    
    for(i = 1; i <= n; i++){
        for(j = 0; j <= m; j++){
            for(k = 0; k <= j; k++){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k] + (double)k / (m - (j - k)));
            }
        }
    }

    cout.precision(10);
    cout << dp[n][m] << endl;

    // cout << n << m << endl;

    return 0;
}