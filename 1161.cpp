#include <bits/stdc++.h>
using namespace std;

long long int fac(int k)
{
    if(k==0) return 1;
    return k*fac(k-1);
}

int main()
{
    int i, m,n;
    while(cin >> m >> n)
    {
        long long int one, two, sum;
        one = fac(m);
        two = fac(n);
        sum = one+two;
        cout << sum << endl;
    }

    return 0;
}