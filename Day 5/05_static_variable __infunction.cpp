#include <iostream>
using namespace std;

void counter() {
    static int c = 1;
    cout << c << endl;
    c++;
}

int main() {
    counter();
    counter();
    counter();
    counter();
    return 0;
}
