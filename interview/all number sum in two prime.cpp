

#include<bits/stdc++.h>
using namespace std;

bool siveprimes(int n, bool isPrime[])
{


	isPrime[0] = isPrime[1] = false;
	for (int i=2; i<=n; i++)
		isPrime[i] = true;

	for (int p=2; p*p<=n; p++)
	{
		if (isPrime[p] == true)
		{
			for (int i=p*2; i<=n; i += p)
				isPrime[i] = false;
		}
	}
}


void fPair(int n)
{
    int pt=0;
	// Sieve prime check
	bool isPrime[n+1];
	siveprimes(n, isPrime);

	for (int i=0; i<n; i++)
	{
		if (isPrime[i] && isPrime[n-i])
		{
			cout << i << " " << (n-i);
			pt=1;
			return;
		}
	}
	if(pt==0)
        cout<<"not possibel"<<endl;
}

int main()
{
	int n,ca ;
	cin>>ca;
	while(ca--)
    {
	cin>>n;
	fPair(n);
    }
	return 0;
}
