#include <iostream>
using namespace std;

int lastTwoDigits(long long int a, long long int b, long long int c, long long int d) {
    a %= 100;
    b %= 100;
    c %= 100;
    return (a * b * c * d) % 100;   
}

int main() {
    int n = 1;
    // cin >> n;
    while (n--) {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = lastTwoDigits(a, b, c, d);
        if (ans < 10) {
            cout << '0' << ans << endl;
        }
        else {
            cout << ans << endl;
        }
    }
    return 0;
}