//Finding lcm in "bangla method" is actually easy.
// Keep multiplying one number a, with i starting from 1 and whenever,
// a*i is divisible by the other number b, a*i is the lcm.


#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int lcm(int a, int b, int m)
{
    if(a*m % b == 0) return a*m;
    return lcm(a, b, m+1);
}

int main()
{
    int a, b, l;
    scanf("%d %d", &a, &b);
    l = lcm(a, b, 1);
    printf("%d\n", l);
    return 0;
}
