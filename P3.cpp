#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n = 600851475143;
    long long m = 0;
    for (long long i = 2; i <= n; i ++)
        while (n % i == 0) m = i, n/= i;
    cout << m << endl;
}
