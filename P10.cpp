#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    for(int i = 2; i * i <= n; i ++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    long long cnt = 0, i = 2;
    while (i < 2000000) {
        cnt += check(i++) * (i-1);
    }
    cout << cnt << endl;
}
