/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W7                                                                                      *
* Created Date: Monday Jan 16th 2023, 9:50:39 am                                                   *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 16/01/2023 10:32:20                                                               *
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
    int n, * d, i, j, lptr = -1, rptr = -1;
    long long lsum = 0, rsum = 0, maxSum = 0;
    cin >> n;

    d = new int[n];

    for(i = 0; i < n; i++)
        cin >> d[i];

    for(i = 0, j = n -1; i < j;){
        if(lptr != i){
            lsum += d[i];
            lptr = i;
        }
        if(rptr != j){
            rsum += d[j];
            rptr = j;
        }

        if(lsum < rsum) i++;
        else if(lsum > rsum) j--;
        else{
            maxSum = lsum;
            i++, j--;
        }
    }

    cout << maxSum << endl;    

}