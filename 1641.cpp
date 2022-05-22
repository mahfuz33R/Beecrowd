#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1,l,w,r,n;
    while(cin >> r && r!=0)
    { 
        cin >> w >> l;
        double oti = sqrt(float((w*w)+(l*l)));
        if((2*r) >= oti) cout << "Pizza " << i << " fits on the table.\n" ;
        else cout << "Pizza " << i << " does not fit on the table.\n" ;
        i++;
    }
    
}