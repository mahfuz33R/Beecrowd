#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n,i, t = 0;

    while(cin>>n>>m && n!=0 && m !=0)
    {
        int number[10000];

        for(i=0; i<=10000 ; i++)
        {
            number[i] = 0;
        }
        for(i=0; i<m ; i++)
        {
            cin >> t;
            if(number[t] == 0 ||  number[t] < 2) number[t]++;
        }
        int count = 0;

        for(i =0; i<=10000 ; i++)
        {
            if(number[i] == 2) count++;
        }
        cout << count<<endl;
    }
    
}