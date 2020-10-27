#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,j,k;
    cout >> n;
    for(i=0;i<n;i++)
    {
        j=i%4;
        if(j<2)
        {
            cout << "a";
        }
        else{
            cout << "b";
        }
    }
    return 0;
}
