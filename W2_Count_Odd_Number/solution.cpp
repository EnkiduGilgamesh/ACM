#include <iostream>

using namespace std;

#define MAX 100

int main(){
    int t, n, i, j, num, A[MAX], res[MAX];
    cin >> t;

    for(i = 0; i < t; i++){
        num = 0;
        cin >> n;

        for(j = 0; j < n; j++){
            cin >> A[j];
        }

        for(j = 0; j < n; j++){
            if(A[j] % 2) num++;
        }

        res[i] = num;
    }

    for(i = 0; i < t; i++){
        cout << res[i] << endl;
    }
}