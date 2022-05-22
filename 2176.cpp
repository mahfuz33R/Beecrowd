#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    int i, j, a=0;
    for (i = 0; i < name.length(); i++)
    {
        if(name[i] == '1') a++;
    }
    if(a%2 == 0) name = name + '0';
    else name = name + '1';

    cout << name << endl;
    
}