#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i;
    cin >> n;
    while(n!=0)
    {
        while(n>0)
        {
            int arr[5];
            t=i=0;
            int low = 256, pos = 100, mark = 0;
            for(i=0;i<5;i++)
            {
                cin >> arr[i];
                if(arr[i] < 128) {
                    pos = i;
                }
                if(arr[i] < 128) mark++;

            }

            if(low > 128) pos = 100;

            if(mark>1) cout << '*' << endl;
            else
            {
                switch (pos)
                {
                case 0:
                    cout << "A" << endl;
                    break;
                case 1:
                    cout << "B" << endl;
                    break;
                case 2:
                    cout << "C" << endl;
                    break;
                case 3:
                    cout << "D" << endl;
                    break;
                case 4:
                    cout << "E" << endl;
                    break;
                case 100:
                    cout << "*" << endl;
                    break;
                
                default:
                    break;
                }
            }
            n--;

        }
        cin >> n;

    }
}