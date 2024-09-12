#include <iostream>
using namespace std;

long long int sumRange(long long int a, long long int b) {
    long long int ans = 0;
    if (a > b) {
        swap(a, b);
    }
    while (a <= b) {
        ans += a;
        a++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long int a, b;
        cin >> a >> b;
        cout << sumRange(a, b) << endl;
    }
    return 0;
}