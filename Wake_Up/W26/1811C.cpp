#include <iostream>

using namespace std;

long long nine[13] = {0};

void solve(){
    long long k;
    int l, i, maxL, x;

    cin >> k;

    for(i = 0; i < 13; i++){
        if(k >= nine[i]){
            maxL = i;
        }
        else break;
    }

    for(l = maxL; l >= 0; l--){
        for(x = 8; x >= 0; x--){
            if(x * nine[l] <= k){
                if(x < 4){
                    cout << x;
                }
                else cout << x + 1;
                break;
            }
        }
        k -= (x * nine[l]);
    }

    cout << endl;
}

int main(){
    int i, t;

    nine[0] = 1;
    for(i = 1; i < 13; i++){
        nine[i] = nine[i - 1] * 9;
    }

    cin >> t;

    for(i = 0; i < t; i++){
        solve();
    }

    return 0;
}