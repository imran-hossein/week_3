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

        sort(a.begin(), a.end());

        int twoMax = a[n - 3] - a[0];
        int twoMin = a[n - 1] - a[2];
        int oneMxOneMn = a[n - 2] - a[1];

        cout << min({twoMax, twoMin, oneMxOneMn}) << endl;
    }
    return 0;
}