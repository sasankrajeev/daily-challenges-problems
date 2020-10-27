#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
    
         ll n,sum=0,a=0,b=1,c=0,i;
         cin >> n;
         for(a=0;a<n;a++)
         {
             a=b+c;
             b=c;
             c=a;
             sum=sum+a;
         }
         cout << sum;
    return 0;
}
