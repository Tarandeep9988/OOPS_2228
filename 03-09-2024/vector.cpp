#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i);
    }
    cout << endl;
    v.push_back(2);
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i);
    }
    cout << endl;
    v.push_back(3);
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i);
    }
    cout << endl;
    v.push_back(4);
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i);
    }
    cout << endl;
    return 0;
}