#include <bits/stdc++.h>

using namespace std;

int fibo(int n)
{
    if(n==0 || n==1) return n;
    return fibo(n-1) + fibo(n-2); 
}

int main()
{
    int n, i,j,k;
    long long int array[28];
    long long int arr[200002];
    cin >> n;
    for(i=0;i <28;i++)
    {
        array[i] = fibo(i);
        //cout << array[i] << "\t" ;
    }



    long long int z = 1;

    for(j=4;j<27;j++)
    {
        if((array[j]) < array[j+1])
        {
            for(k=array[j]+1 ; k<array[j+1] ; k++)
            {
                arr[z] = k;
                z++;
            }
            
        }
    }

    cout << arr[n] << endl;

    
}