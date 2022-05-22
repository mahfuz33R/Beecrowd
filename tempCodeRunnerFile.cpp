#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    while (cin >> n >> r )
    {
        if(n==r) cout << "*" << endl;

        else
        {
            int arr[r], dead[n-r], ind = 0;
            for (int i=0;i<r;i++)
            {
                cin >> arr[i];
            }
            for(int i=1;i<=n;i++)
            {
                int f=0;
                for (int j=0;j<r;j++)
                {
                    if(i == arr[j])
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                    dead[ind] = i;
                    ind++;
                } 
            }

            for (int i = 0; i < n-r; i++)
            {
                cout << dead[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}