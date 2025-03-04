#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;cin >> n >> m;
    vector<int>a(n), b(m);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for (int i = 0;i < m;i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    int count1 = 0, count2 = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int curr = a[l];
        while (l < n && a[l] == curr)
        {
            count1++;l++;
        }
        while (r < m && curr > b[r])r++;
        while (r < m && b[r] == curr)
        {
            count2++;r++;
        }
        ans += (1LL * count1 * count2);
        count1 = 0;count2 = 0;
    }
    cout << ans << endl;

    return 0;
} 