#include <stdio.h>
#define ll long long int
int main()
{
    ll n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        j=i%4;
        if(j<2)
        {
            printf("a");
        }
        else{
            printf("b");
        }
    }
    return 0;
}
