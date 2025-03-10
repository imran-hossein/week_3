#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        int l = 0, r = 0, count = 0;
        long long ans = 0;
        bool greaterQ = false;
        while(r<n)
        {
            if(v[r]>q)
            {
                greaterQ = true;
                l = r;
            }
             
            if(r-l+1==k)
            {
                count++;
                if(greaterQ)
                {
                    count = 0;
                    greaterQ = false;
                }
                ans += count;
                l++;
            }

            r++;
        }
        cout << ans << endl;
    }
    return 0;
}