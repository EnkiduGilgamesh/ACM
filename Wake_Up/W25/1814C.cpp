// Created on iPad.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n, i, j;
    cin >> n;

    vector<int> s(2);
    vector<pair<int, int>> a(n);

    for(i = 0; i < 2; i++){
        cin >> s[i];
    }

    for(i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    vector<vector<int>> list(2);

    for(i = 0; i < n; i++){
        if(s[0] * (list[0].size() + 1) <= s[1] * (list[1].size() + 1)){
            list[0].push_back(a[i].second);
        }
        else list[1].push_back(a[i].second);
    }

    for(i = 0; i < 2; i++){
        cout << list[i].size() << " ";
        for(j = 0; j < list[i].size(); j++){
            cout << list[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t, i, j;
    cin >> t;

    for(i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}