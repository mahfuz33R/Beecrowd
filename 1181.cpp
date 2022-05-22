#include <bits/stdc++.h>
using namespace std;

int main()
{
    double array[12][12];
    int i,j,n;
    double sum = 0;
    char letter;
    cin >> letter;
    for(i=0;i<12;i++)
    {
        for ( j = 0; j < 12; j++)
        {
            cin >> array[i][j];
        }
    }
    //n = 11;
    for(i = 11; i>=0;i--)
    {
        for (j =12-i ; j <= 11; j++)
        {
            sum += array[i][j];
        }
    }
 
    if(letter == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else
    {
         cout << fixed << setprecision(1) << sum/66.0 << endl;
    }
    return 0;
    
}
