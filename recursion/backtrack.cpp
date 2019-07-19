
#include <bits/stdc++.h>
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include<complex>
using namespace std;
#define mx 15000000
#define MK 200005
#define pii pair<int,int>
#define tii pair<pii,int>
#define fs first
#define sc second
#define mp make_pair

int vis[200];
char str[6];
string in="abc";
void backtrack(int pos)
{
    if(pos==3)
    {
        for(int i=0;i<3;i++)cout<<str[i];
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        if(vis[i])continue;
        vis[i]=1;
        str[pos]=in[i];
        backtrack(pos+1);
        vis[i]=0;
    }
}
int main()
{
    int i,j,k,l,m,n,p,q,g,h,ts;
    backtrack(0);


}
