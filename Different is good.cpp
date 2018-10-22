By ivvraghavendra199, contest: Codeforces Round #352 (Div. 2), problem: (B) Different is Good, Accepted, #
 #include <bits/stdc++.h>

using namespace std;



int main()
{
    set <char> x;
    int n;
    cin >> n;
    if(n>26)
    {
        cout << -1;
        return 0;
    }
    string b;
    int i,j,count=0;
    cin >> a;
    for(i=0;i<b.size();i++)
    {
        x.insert(b[i]);
    }
    cout << n - x.size();
    return 0;
}
