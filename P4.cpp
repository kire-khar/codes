#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.size(); i ++)
        if (s[i] != s[s.size() - i - 1])
            return 0;
    return 1;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i ++) {
        for (int j = 100; j < 1000; j ++) {
            if (check(i * j))
                ans = max(ans, i * j);
        }
    }
    cout << ans << endl;
}
