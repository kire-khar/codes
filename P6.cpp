#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0;
    int ssum = 0;
    for (int i = 0 ;i < 101; i ++)
        sum += i, ssum += i * i;
    cout << sum * sum - ssum  << endl;
}
