#include<stdio.h>
#define z 24
int havana ( int t[], int n )
{
    int c = 0, k = 0;
    for ( int i = 0; i < n; i++ )
    {
        if ( t[i] == 1 )
        {
            k++;
            if ( c < k )
                c = k;
        }        
        else    
            k = 0;
    }
    return c;
}
int main()
{
    int t[z] = {1,1,1,1,1,0,0,1,0,1,1,0,1,1,0,1,1,1,1,0,1,1,0,1};
    printf("the maximum of consecutive 1's in the array is %d", havana ( t, z ));
    return 0;
}
