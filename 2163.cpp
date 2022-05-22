#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j,left=0,right=0;

    cin >> m >> n;

    int ar[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> ar[i][j];
        }
    }


    for(i=1;i<m-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(ar[i][j] == 42 && ar[i-1][j-1] == 7 && ar[i-1][j] == 7 && ar[i-1][j+1]==7 && ar[i][j-1]==7 && ar[i][j+1] == 7 && ar[i+1][j-1] == 7 && ar[i+1][j] == 7 && ar[i+1][j+1]==7 )
            {
                left= i;
                right= j;
                break;
            }
        }
    }
    if(left==0 && right==0) cout << left << " " << right<< endl;
    else cout << left+1 << " " << right+1 << endl;
    return 0;
}