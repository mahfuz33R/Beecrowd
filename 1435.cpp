#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,a,b;
    for(;;)
    {
        cin >> n;
        if(n==0) break;
        int hn = n/2;
        if(n%2 == 1) hn++;
        int arr[n][n];
        a = 0;
        b = n-1;
        for(k = 1; k<=hn;k++)
        {
            for(i=a;i<=b;i++)
            {
                for(j=a;j<=b;j++)
                {
                    arr[i][j]=k;
                }
            }
            a++;b--;
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==0) cout<< setw(3) << arr[i][j];
                else cout<< " "<< setw(3) << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}