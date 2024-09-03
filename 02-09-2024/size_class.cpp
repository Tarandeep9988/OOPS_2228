#include <iostream>
using namespace std;

class obj
{
    public:
    char c; 
    int a; 
    char ch[21]; 
};


int main() {
    cout << sizeof(obj);
    return 0;
}