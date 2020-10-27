#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() 
{
    string a[20];
    cin >> a;
    int k = a.length();
    int n = 26,i;
    for(i=0;i<k;i++)
    {
        n = n + 25;
    }
    cout << n;

    return 0;
}


