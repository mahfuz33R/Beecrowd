#include <bits/stdc++.h>
using namespace std;

bool dis(int a, int b)
{
    return a>b;
}


int main()
{
    int n,q;
    int num;
    while (cin>>n>>q)
    {
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin >> array[i];    
        }
        sort(array, array+n, dis);

        for(int i=0;i<q;i++)
        {
            cin >> num;
            cout << array[num-1]<<endl;
        }
    }
    return 0;
}

// bool dis(int a, int b)
// {
//     return a>b;
// }

// int main()
// {
//     //int array[100];

//     vector <int> vec;

//     int n,q;
//     while (cin>>n>>q)
//     {
//         int num;
//         for(int i=0;i<n;i++)
//         {
//             cin >> num;
//             vec.push_back(num);
//         }

//         sort(vec.begin(), vec.end(), dis);

//         for(int i=0;i<q;i++)
//         {
//             cin >> num;
//             cout << vec[num-1]<<endl;
//         }
//     }
