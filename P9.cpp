#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1 ; i < 1000; i ++) {
        for (int j = i + 1; j < 1000 - i; j ++) {
            if (i + j < 1000 && i * i + j * j == (1000 - i - j)*(1000 - i - j))
                cout << i * j * (1000 - j - i) << endl;
        }
    }
}
