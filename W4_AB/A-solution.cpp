#include <iostream>
#include <string>
using namespace std;

bool isPalin(string s){
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == s[len - 1 - i]) continue;
        else return false;
    }

    return true;
}

int suffixIsPalin(string s){
    string suf;
    int len = s.length(), i, res = len - 1;
    for(i = len - 2; i >= 0; i--){
        suf = s.substr(i, len - i);
        if(isPalin(suf)) res = i;
    }

    return res - 1;
}

int main(){
    string s;
    int i, len, begin;
    cin >> s;
    len = s.length();
    begin = suffixIsPalin(s);
    if(begin >= 0)
        for(i = begin; i >= 0; i--) s += s[i];

    cout << s;

    return 0;
}