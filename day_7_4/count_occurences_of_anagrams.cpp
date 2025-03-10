#include<bits/stdc++.h>
using namespace std;

int search(string &pat, string &txt)
{
    map<char, int> patMp;
    map<char, int> txtMp;
    for (int i = 0; i < pat.size();i++)
    {
        patMp[pat[i]]++;
    }
    
    int l = 0, r = 0, count = 0;
    while(r<txt.size())
    {
        txtMp[txt[r]]++;
        if(r-l+1==pat.size())
        {
            if(patMp == txtMp)
            {
                count++;
            }
            txtMp[txt[l]]--;
            if(txtMp[txt[l]]==0)
            {
                txtMp.erase(txt[l]);
            }
            l++;
        }
        r++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string txt, pat;
    cin >> txt >> pat;
    int ans= search(pat, txt);
    cout << ans << endl;
    return 0;
}