#include <bits/stdc++.h>
using namespace std;

int main() {
    int f1 = 1, f2 = 1;
    int ans = 0;
    while (f2 < 4 * 1e6) {
        ans += (f2 %2 == 0) * f2;
        f2 = f1 + f2;
        f1 = f2 - f1;
    }
    cout << ans;
}
