#include <iostream>
#include <algorithm>

using namespace std;

#define INF 1e9 + 10

int n, res = 0;
int * a;

void solve(){
    int i, p = 0;
    for(i = 0; i < n; i++){
        while(a[p] - a[i] <= 5 && p <= n) p++;
        res = max(res, p - i);
        // cout << res << " ";
    }
    // cout << endl;
}

int main(){
    int i;
    cin >> n;

    a = new int[n + 1];

    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    a[i] = INF;
    sort(a, a + n);

    solve();

    cout << res << endl;

    return 0;
}