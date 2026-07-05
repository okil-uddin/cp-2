#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[3105];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ans = max(ans, a[i] ^ a[j]);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}