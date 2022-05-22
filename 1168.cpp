#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n,m;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        int arr[6] = {100, 50, 20, 10, 5, 2};
        int rem = m-n;
        i = 0;
        int f = 0;
        while(rem != 0 && i <6)
        {
            int r = rem - arr[i];
            if(r>=0) 
            {
                rem-=arr[i];
                f++;
            }
            i++;
        }
        if( rem == 0 && f == 2) cout<< "possible"<<endl;
        else cout << "impossible"<<endl;
    }
    return 0;
}