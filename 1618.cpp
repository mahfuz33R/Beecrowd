#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i ,n, ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
    cin >>t;
    for(i=0;i<t;i++)
    {
        ax=bx=cx=dx=ay=by=cy=dy=rx=ry=0;
        cin >> ax>>ay>>bx>>by>>cx>>cy>>dx>>dy>>rx>>ry;
        // cout << ax << ay << bx << by << cx << cy << dx << dy << rx << ry ;
        if((rx>=ax && rx <=bx) || (rx<=ax && rx >=bx))
        {
            if((ry>=ay && ry <= dy) || (ry<=ay && ry >=dy))
            {
                cout << 1 << endl ;
            }
            else cout << 0 << endl ;
        }
        else cout << 0 << endl ;
    }
}