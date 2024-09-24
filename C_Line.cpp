#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll extended_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll d = __gcd(a, b);

    if (c %d != 0) {
        cout << -1 << endl;
        return 0;
    }

    ll x, y;
    ll e = extended_gcd(a, b, x, y);

    x *= (-c / e);
    y *= (-c / e);

    cout << x << " " << y << endl;

    return 0;
}
