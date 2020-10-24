#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,m;
    cin >> n; 
    cin >> m;
    ll a[n],b[n],i,p,q,l,s;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    ll c[m],j;
    for(i=1;i<=m;i++)
    {
        c[i] = 1;
    }
    for(i=0;i<n;i++)
    {
        s=a[i];
        p=b[i];
        for(j=s;j<=p;j++)
        {
            c[j] = 0;
        }
    }
    ll count = 0;
    for(i=1;i<=m;i++)
    {
        if(c[i]!=0)
        {
            count++;
        }
    }
    cout << count << endl;
    for(i=1;i<=m;i++)
    {
        if(c[i]!=0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
