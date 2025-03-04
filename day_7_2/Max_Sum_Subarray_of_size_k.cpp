#include<bits/stdc++.h>
using namespace std;

int maximumSumSubarray(vector<int>& arr, int k)
{
    int l = 0, r = 0;
    long long ans = 0, sum = 0;
    while (r < arr.size())
    {
        sum += arr[r];
        if ((r - l) + 1 == k)
        {
            ans = max(ans, sum);
            sum -= arr[l];
            l++;r++;
        }
        else r++;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;cin >> n >> k;
    vector<int>arr(n);
    for (int& x : arr) cin >> x;

    int ans = maximumSumSubarray(arr, k);
    cout << ans << endl;
    return 0;
}