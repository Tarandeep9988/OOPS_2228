#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 5> arr = {1, 4, 5, 6, 7};
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    arr.fill(5);
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;


    array<int, 10> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // What will print
    for (auto it = arr2.rbegin(); it < arr2.rend(); it++) { // reverse iterator, when incremented it actually decremented
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = arr2.end() - 1; it >= arr2.begin(); it--) {
        cout << *it << " " ;
    }
    cout << endl;
    cout << * (arr2.rbegin() - 1);
    return 0;
}