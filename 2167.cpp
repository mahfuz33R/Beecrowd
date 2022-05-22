#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i, f;
    cin >>n;
    int array[n];
    for ( i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for ( i = 0; i < n-1; i++)
    {
        if(array[i] > array[i+1]) 
        {
            cout << i+2 << endl;
            return 0;
        }

    }
    cout << 0 << endl;
    return 0;
    
}