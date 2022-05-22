#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,p = 0, im = 0, j,k;
    
    int N[15], par[5], impar[5];

    for(j=0;j<15;j++)
    {
        cin >> n;
        if(n%2==0) 
        {
            par[p]=n;
            p++;
        }
        else 
        {
            impar[im] = n;
            im++;
        }
        if(p==5)
        {
            for(i=0;i<5;i++)
            {
                cout << "par[" << i << "]" << " = " << par[i] << "\n";
            }
            p = 0;
        }
        else if(im == 5)
        {
            for(i=0;i<5;i++)
            {
                cout << "impar[" << i << "]" << " = " << impar[i] << "\n";
            }
            im = 0;
        }
    }

    if(im>0)
    {
        for(i=0;i<im;i++)
            {
                cout << "impar[" << i << "]" << " = " << impar[i] << "\n";
            }
            im = 0;
    }

    if(p>0)
    {
        for(i=0;i<p;i++)
            {
                cout << "par[" << i << "]" << " = " << par[i] << "\n";
            }
            p = 0;
    }
    

}