#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    // Parameterized Constructor
    Point(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << "(" << x << "," << y << ")\n";
    }
};

int main() {
    Point p2(3, 4);  // parameterized constructor runs
    p2.show();       // (3,4)
    return 0;
}
