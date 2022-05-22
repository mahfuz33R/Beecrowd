#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin >>n;
        int array[n];
        for(int j = 0; j<n;j++)
        {
            cin >> array[j];
        }
        int mid = n/2;
        cout << "Case " << i+1 << ": " << array[mid]<< endl;
    }
}