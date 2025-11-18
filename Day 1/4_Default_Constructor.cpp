#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    // Default Constructor
    Point() {
        x = 0;
        y = 0;
    }

    void show() {
        cout << "(" << x << "," << y << ")\n";
    }
};

int main() {
    Point p1;     // default constructor runs
    p1.show();    // (0,0)
    return 0;
}
