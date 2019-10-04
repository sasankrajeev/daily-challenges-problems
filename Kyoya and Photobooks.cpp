#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main() 
{
    string a;
    //char a[20];
    cin >> a;
    //scanf("%s",a);
    int k = a.length();
    int n = 26,i;
    for(i=0;i<k;i++)
    {
        n = n + 25;
    }
    //printf("%d",n);
    cout << n;
    return 0;
}


