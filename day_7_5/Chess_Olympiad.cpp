#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, z;
    cin >> x >> y >> z;

    double firstTeam = x + 0.5 * y;
    double secondTeam =(x + y + z) - firstTeam;
    double remain = 4 - (x + y + z);
    if(firstTeam + remain > secondTeam)
        cout << "Yes" << endl;
        else
            cout << "No" << endl;
    return 0;
}