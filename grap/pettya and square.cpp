#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x,y;
	scanf("%d %d %d",&n,&x,&y);
	if((x==n/2||x==n/2+1)&&(y==n/2||y==n/2+1))
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;

}
