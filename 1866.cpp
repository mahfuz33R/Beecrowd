#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,t,j;
    cin >>t;
    while(t>0)
    {
        cin>> n;

        if(n%2 == 0) cout << 0<< endl;
        else cout << 1 << endl;
        t--;
    }
    return 0;
}
