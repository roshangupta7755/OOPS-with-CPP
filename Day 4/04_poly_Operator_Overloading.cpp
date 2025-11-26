#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    Complex(int r = 0, int i = 0) {
        this->r = r;
        this->i = i;
    }

    Complex operator + (Complex obj) {
        Complex temp;
        temp.r = r + obj.r;
        temp.i = i + obj.i;
        return temp;
    }
};

int main() {
    Complex c1(4, 5), c2(1, 2);
    Complex c3 = c1 + c2;

    cout << "Sum = " << c3.r << " + " << c3.i << "i" << endl;

    return 0;
}
