#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
   int t, n, i, j, *c;
   long long sum;
   string s;

   cin >> t;

   for(i = 0; i < t; i++){
      cin >> n;
      cin >> s;

      sum = 0;

      c = new int[n];

      for(j = 0; j < n; j++){
         if(s[j] == 'L'){
            c[j] = (n - 1 - j) - j;
            sum += (long long)j;
         }
         else{
            c[j] = j - (n - 1 - j);
            sum += (long long)(n - 1 - j);
         }
      }
      sort(c, c + n, greater<int>());

      for(j = 0; j < n; j++){
         if(c[j] > 0) sum += (long long)c[j];
         cout << sum << ' ';
      }

      cout << endl;
   }

   return 0;

}