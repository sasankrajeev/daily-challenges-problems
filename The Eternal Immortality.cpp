#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll a,b;
    cin >> a >> b;
    ll i,j,p=1,l=1,p;
    if(b<a)
    {
        cout << "0";
    }
    else{
        for(i=a+1;i<b+1;i++)
        {
            p=p*i%10;
            if(p==0)
            {
                break;
            }
        }
    }
    cout << p;

    return 0;
}
