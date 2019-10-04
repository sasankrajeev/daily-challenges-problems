By ivvraghavendra199, contest: acmsguru, problem: (123) The sum, Wrong answer on test 2, #
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
    {
    
         int n,sum=0,a=0,b=1,c=0,i;
         //scanf("%d",&n);
         cin >> n;
         for(a=0;a<n;a++)
         {
             a=b+c;
             b=c;
             c=a;
             sum=sum+a;
         }
         cout << sum;        
 //printf("%d",sum);
    return 0;
}
