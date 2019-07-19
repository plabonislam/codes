
#include <bits/stdc++.h>

using namespace std;

double findsqrt(double n)
{
    double inct=1,x=11,sqrt=0;
    while(x--)
    {
        for(int i=1; i<1000000009; i++)
        {
            sqrt+=inct;

            if(sqrt*sqrt==n)
                break;
            else if(sqrt*sqrt>n)
            {
                sqrt-=inct;
                inct/=10;
                break;
            }
        }

        if(sqrt*sqrt==n)
            break;
    }
    return sqrt;
}

int main()
{

    double n,x;
    while(scanf("%lf",&n)==1)
    {
        x=findsqrt(n);
        printf("%.10lf\n",x);
    }
    return 0;
}
