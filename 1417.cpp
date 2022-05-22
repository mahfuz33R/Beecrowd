#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    while(cin>>n>>r)
    {
        bool b = false;
        vector<int> v(n+1);
        for (int i = 0; i < r; i++)
        {
            int x;
            cin >> x;
            v[x] = 1;
        }
        for (int i = 1; i < n+1; i++)
        {
            if(v[i] == 0)
            {
                cout << i << " ";
                b = true;
            }
        }
        if(b == false)
        {
            cout << "*" ;
        }
        cout << endl;
        
    }
    return 0;

}














// int main()
// {
//     int n,r;
//     while (cin >> n >> r )
//     {
//         int arr[r];
//         for (int i=0;i<r;i++)
//         {
//             cin >> arr[i];
//         }
        
//         if(n==r) cout << "*" << endl;

//         else
//         {
//             int dead[n-r], ind = 0;
//             for(int i=1;i<=n;i++)
//             {
//                 int f=0;
//                 for (int j=0;j<r;j++)
//                 {
//                     if(i == arr[j])
//                     {
//                         f=1;
//                         break;
//                     }
//                 }
//                 if(f==0)
//                 {
//                     dead[ind] = i;
//                     ind++;
//                 } 
//             }

//             for (int i = 0; i < n-r; i++)
//             {
//                 cout << dead[i] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }