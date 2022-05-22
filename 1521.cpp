#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k,i,j;
    cin >> n ;
    while(n != 0)
    { 
        int array[n];
        for (i = 0; i < n; i++)
        {
             cin >> array[i];
        }
        cin >>k;
        int a = k-1;

        for(i=0;i<n;i++)
        {
            if(array[a] == array[(array[a])-1])
            {
                //cout << a<< endl;
                cout << array[a] << endl;
                break;
            }
            a = (array[a])-1;
            //cout<< a;
        }

        cin >> n; 
    }
    return 0;
}

