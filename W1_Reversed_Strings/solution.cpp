/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: Q1_Reversed_Strings                                                                     *
* Created Date: Tuesday Jan 10th 2023, 9:55:08 am                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 10/01/2023 10:03:23                                                               *
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

#define MAX 10

int main(){
    int i, n;
    // char ** obj = (char **)malloc(sizeof(char *) * MAX);
    // for(i = 0; i < MAX; i++){
    //     obj[i] = (char *)malloc(sizeof(char) * MAX);
    // }
    char ** obj = new char*[MAX];
    for (i = 0; i < MAX; i++){
        obj[i] = new char[MAX];
    }
    
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> obj[i];
    }

    for(i = n - 1; i >= 0; i--){
        cout << obj[i] << endl;
    }

    return 0;
}
