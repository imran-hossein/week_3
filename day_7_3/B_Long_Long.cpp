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
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        long long ans = 0, count = 0;
        bool negSeg = false;
        for (int i = 0; i <= n;i++)
        {
            if(i<n) ans += abs(a[i]);

            if(negSeg)
            {
                if(i==n || a[i]>0)
                {
                    count++;
                    negSeg = false;
                }
            }
            else {
                if(a[i]<0)
                {
                    negSeg = true;
                }
            }
        }

        cout << ans << " " << count << endl;
    }
    return 0;
}