
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;cin >> n >> m;
    vector<int>a(n);
    vector<int>b(m);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for (int i = 0;i < m;i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0, sum = 0;
    while (l < m)
    {
        if (r < n && a[r] < b[l])
        {
            sum++;
            r++;
        }
        else {
            cout << sum << " ";
            l++;
        }
    }


    return 0;
}