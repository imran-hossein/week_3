#include<bits/stdc++.h>
using namespace std;

vector<int>firstNegativeInteger(vector<int>& arr, int k)
{
    int l = 0, r = 0;
    vector<int> ans;
    queue<int>que;
    while (r < arr.size())
    {
        if (arr[r] < 0)
        {
            que.push(arr[r]);
        }
        if ((r - l) + 1 == k)
        {
            if (que.empty())
            {
                ans.push_back(0);
            }
            else ans.push_back(que.front());
            if (!que.empty() && arr[l] == que.front())
            {
                que.pop();
            }
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

    vector<int>ans = firstNegativeInteger(arr, k);
    for (auto val : ans)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}