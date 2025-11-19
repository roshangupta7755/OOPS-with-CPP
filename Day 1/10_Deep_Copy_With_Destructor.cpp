#include <iostream>
using namespace std;

class Box {
public:
    int *size;

    Box(int s) {
        size = new int(s);
    }

    // Deep Copy
    Box(const Box &b) {
        size = new int(*b.size);
    }

    ~Box() {
        delete size;
    }
};

int main() {
    Box b1(10);
    Box b2 = b1;

    *b2.size = 50;

    cout << *b1.size << endl;  // Output: 10
    cout << *b2.size << endl;  // Output: 50
    return 0;
}
