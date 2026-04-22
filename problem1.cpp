// Change the minimum number of characters in a binary string so that it becomes perfectly alternating
/*input:
5
0
01
00
10000
10100

output:
1/0
0
1
2
1
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int t = 0; t < n; t++)
    {
        string s;
        cin >> s;

        int change0 = 0;
        int change1 = 0;

        for (int i = 0; i < s.length(); i++)
        {

            if (i % 2 == 0)
            {
                if (s[i] != '0')
                {
                    change0++;
                }
            }
            else
            {
                if (s[i] != '1')
                {
                    change0++;
                }
            }

            if (i % 2 == 0)
            {
                if (s[i] != '1')
                {
                    change1++;
                }
            }
            else
            {
                if (s[i] != '0')
                {
                    change1++;
                }
            }
        }

        if (change0 < change1)
        {
            cout << change0 << endl;
        }
        else
        {
            cout << change1 << endl;
        }
    }

    return 0;
}