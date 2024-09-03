#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    // int array
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // string
    string s = "Hello";
    for (auto ch : s) {
        cout << ch;
    }
    cout << endl;
    return 0;
}