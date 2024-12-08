#include <iostream>
#include <vector>
#include <climits>
using namespace std;
using ll = long long;

int main() {
    ll n; 
    cin >> n;
    vector<ll> a(n);
    ll res = LLONG_MAX;
    int dem = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < res) {
            res = a[i];
            dem = 1;
        } else if (a[i] == res) {
            dem++;
        }
    }

    cout << dem;
    return 0;
}
