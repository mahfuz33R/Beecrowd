#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Number of integers: ");
    scanf("%d", &n);
    printf("Numbers : \n");
    int array[n];
    int div = n%3;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int sum = 0;

    for(i = 0;i<n-div;i+=3  )
    {
        int s = 0, three[3];
        int a = array[i];
        int b = array[i+1];
        int c = array[i+2];
        if( a< b && a<c )
        {
            three[0] = b;
            three[1] = a;
            three[2] = c; 
            s = three[0] + three[1] + three[2];
            // if(s>sum)
            // {
            //     sum = s;
            // }

        }

        else if( c< b && a>c )
        {
            three[0] = b;
            three[1] = c;
            three[2] = a; 
            s = three[0] + three[1] + three[2];
            
        }

        else if( b< a && b<c )
        {
            three[0] = c;
            three[1] = b;
            three[2] = a; 
            s = three[0] + three[1] + three[2];
        }

        else printf("No base found\n");

        if(s != 0) printf("[%d %d %d] = %d \t\n", three[0], three[1], three[2], s);

    }

    if(div != 0) printf("No base found\n");

    return 0;
    
    
}