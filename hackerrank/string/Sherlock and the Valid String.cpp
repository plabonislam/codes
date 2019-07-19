
#include <bits/stdc++.h>
using namespace std;
map<char, int> mp, check;
int main() {
  string s;
  char visit[27] = {"abcdefghijklmnopqrstuvwxyz"};
  int arr[100], k = 0, ct;
  cin >> s;
  int l = s.length();
  for (int i = 0; i < l; i++) {
    mp[s[i]]++;
  }

  // cout<<t<<"man"<<endl;

  for (int i = 0; i < strlen(visit); i++) {
    if (mp[visit[i]] == 0)
      continue;
    int t = mp[visit[i]];
    // cout<<visit[i]<<t<<endl;
    arr[k++] = t;
  }

  sort(arr, arr + k);
  ct = 0;
  int max = 0, min = 1000000, mi = 0;
  for (int i = 0; i < k; i++) {
    if (arr[i] >= max) {
      max = arr[i];
    }
    if (arr[i] <= min) {
      min = arr[i];
    }

    // cout<<arr[i]<<endl;
  }

  for (int i = 0; i < k; i++) {
    if (arr[i] >= max) {
      ct++;
    }
    if (arr[i] <= min) {
      mi++;
    }
  }

  // cout<<k<<"ha"<<endl;
cout<<mi<<" "<<ct<<max <<" "<<min<<endl;
  if (max == min)
    cout << "YES" << endl;

  else if (max >min) {

    if (mi == 1 )
      cout << "YES" << endl;
    else if(max-min==1 && ct==1)
    {
        cout<<"YES"<<endl;
    }

    else
      cout << "NO" << endl;
  }

  else {
    cout << "NO" << endl;
  }
}
