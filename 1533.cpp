#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i;
    while(cin >> n && n!= 0)
    {
        int array[n];
        int high = 0;
        int sh = 0, ans;

        for ( i = 0; i < n; i++)
        {
            cin >> array[i];
            if(array[i] >= high)
            {
                high = array[i];
            }
        }

        for ( i = 0; i < n; i++)
        {
            if(array[i] < high && array[i] > sh)
            {
                sh = array[i];
                ans = i+1;
            }
        }






        // for ( i = 0; i < n; i++)
        // {
        //     cin >> array[i];

        //     if (array[i] > high) high = array[i];

        //     if(i==0)  
        //     {
        //         sh =array[i];
        //         ans = i+1;
        //     }
        //     else if(i==1)
        //     {
        //         if( array[i] < high)
        //         {
        //             sh = array[i];
        //             ans = i+1;
        //         }

        //     }
        //     else if(array[i] < high && array[i] > sh) {
        //         sh = array[i];
        //         ans = i+1;
        //     }
        // }
    cout << ans << endl;

    }
    return 0;
}