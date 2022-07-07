#include <bits/stdc++.h>

using namespace std;

int main () {
    int x, y, z, a, b, c;
    bool flag = true;

    cin >> x >> y >> z >> a >> b >> c;

    if (a >= x) {
        a -= x;
    } else {
        flag = false;
    }

    if (a + b >= y) {
        a -= y;
    } else {
        flag = false;
    }

    if (a + b + c < z) {
        flag = false;
    }

    if(flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}