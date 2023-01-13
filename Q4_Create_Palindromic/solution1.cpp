 #include <iostream>

 using namespace std;
 
 int main(){
    string s;
    int i, len;
    cin >> s;
    len = s.length();
    for(i = len - 1; i >= 0; i--) s += s[i];

    cout << s;

    return 0;
}