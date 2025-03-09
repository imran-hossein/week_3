#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0, count = 0;
        int ans = 1e9;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                count++;
            }
            if ((r - l) + 1 == k)
            {
                ans = min(count, ans);
                if (s[l] == 'W')
                {
                    count--;
                }
                l++;r++;
            }
            else r++;

        }
        cout << ans << endl;
    }
    return 0;
}