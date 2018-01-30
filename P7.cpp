#include <bits/stdc++.h>
using namespace std;

int check(int n) {
    for(int i = 2; i * i <= n; i ++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int cnt = 0, i = 2;
    while (cnt < 10001) {
        cnt += check(i++);
    }
    cout << i - 1 << endl;
}
