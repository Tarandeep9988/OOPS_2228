#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v(10, vector<int>(20, 1));
    for (int i = 0, n = v.size(); i < n; i++) {
        int m = v[i].size();
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}