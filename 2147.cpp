#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        string word;
        cin >> word;
        double a = word.length();
        a*=0.01;
        cout << setprecision(2) << fixed << a << endl;
    }
    
}