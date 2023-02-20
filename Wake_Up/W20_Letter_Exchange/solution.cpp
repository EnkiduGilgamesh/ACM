/*-*- gcc 10.3.0 -*-*/
/*-*- coding:utf-8 -*-*/
/***************************************************************************************************
* File: \solution.cpp                                                                              *
* Project: W20_Letter_Exchange                                                                     *
* Created Date: Tuesday Feb 7th 2023, 10:49:22 am                                                  *
* Author: Wenren Muyan                                                                             *
* Comments:                                                                                        *
* --------------------------------------------------------------------------------                 *
* Last Modified: 7/02/2023 12:10:38                                                                *
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

struct ex{
    int p1;
    char c1;
    int p2;
    char c2;
};

string win = "win";
enum{W, I, N};

int main(){
    int t, i, j, k1, ne, k2, l, m, (*pc)[3];
    string c;
    ex * e;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> m;

        pc = new int[m][3];
        e = new ex[2 * m];
        ne = 0;

        memset(pc, 0, sizeof(int) * m * 3);

        for(j = 0; j < m; j++){
            cin >> c;
            for(k1 = 0; k1 < 3; k1++){
                if(c[k1] == 'w') pc[j][W]++;
                else if(c[k1] == 'i') pc[j][I]++;
                else pc[j][N]++;
            }
        }

        for(j = 0; j < m; j++){
            for(k1 = 0; k1 < 3; k1++){
                while(pc[j][k1] > 1){
                    for(l = j + 1; l < m; l++){
                        k2 = (k1 + 1) % 3;
                        if(pc[l][k1] == 0){
                            while((pc[j][k2] >= 1 || pc[l][k2] <= 1) && k2 != k1)
                                k2 = (++k2) % 3;
                            if(k2 == k1) continue;
                            else{
                                e[ne].p1 = j + 1;
                                e[ne].c1 = win[k1];
                                e[ne].p2 = l + 1;
                                e[ne].c2 = win[k2];
                                pc[j][k1]--;
                                pc[j][k2]++;
                                pc[l][k2]--;
                                pc[l][k1]++;
                                ne++;
                                break;
                            }
                        }
                    }
                }
            }
        }

        cout << ne << endl;

        for(j = 0; j < ne; j++){
            cout << e[j].p1 << " " << e[j].c1 << " " << e[j].p2 << " " << e[j].c2 << endl;
        }
    }

    return 0;
}