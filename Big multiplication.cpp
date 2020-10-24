#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i,p;
    cin >> p;
    for(i=0;i<p;i++)
    {
        string n,m;
        ll y = 0,u,g = 0;
        cin >> n >> m;
        ll k = n.size();
        ll l = m.size();
        for(int j=0;j<k;j++)
        {
            g = g + (n[j] - 48);
        }
        for(ll u=0;u<l;u++)
        {
            y = y + (m[u] - 48);
        }
        ll f = (((g%3)*(y%3))%3);
        cout << f << endl;
    }
    return 0;
}

