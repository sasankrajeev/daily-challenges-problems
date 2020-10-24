#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    map <string,int> a;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin >> s;
        a[s]++;
        if(a[s]==1)
        {
            cout << "OK" <<endl;
        }
        else
        {
            cout << s << a[s]-1 << endl;
        }
    }
    return 0;
}
