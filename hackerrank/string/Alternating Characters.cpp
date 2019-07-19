#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ct=0,i,j,n,l;
      string s;
  cin >> n;
  while (n--) {
    ct = 0;
    cin >> s;
    l = s.length();
    for (i = 0; i < l - 1; i++) {
      if (s[i] == s[i + 1])
        {
            s.erase(i,i+1);
            i--;
        }
    }
    cout << s << endl;
  }
}
