#include <iostream>
using namespace std;

void demo() {
    static int x = 0;   // static variable
    x++;
    cout << x << endl;
}

int main() {
    demo();
    demo();
    demo();
    return 0;
}
