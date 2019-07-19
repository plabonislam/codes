#include <bits/stdc++.h>
using namespace std;

int n;
int evaluate(char* expr)
{
    vector<int>vc[100];

    int l = strlen(expr);
    //cout<<l<<endl;
    int k = 0;
    n=0;
    for(int i = 0;i<=l;i++)
    {
        if(expr[i]>='0'&&expr[i]<='9')
        {
            n=n*10+expr[i]-48;
            //cout<<n<<"inner"<<endl;


        }


        else if(expr[i]=='+' || expr[i]=='*' || expr[i]=='\0')
        {
           // cout<<n<<endl;
            vc[k].push_back(n);
            n=0;
            if(expr[i]=='+')
                k++;
        }
    }
    int sum = 0;
    for(int i = 0;i<k+1;i++)
    {
        int mul = 1;
        for (int j=0;j< vc[i].size();j++)
        {
            mul = mul * vc[i][j];

        }

        sum+=mul;
    }

    return sum;


}

int main()
{
	char expr1[10000];
	gets(expr1);
	int res = evaluate(expr1);
    printf("%d\n",res);

	return 0;
}
