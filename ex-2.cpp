#include <iostream>
using namespace std;

void swapValues(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside the function, a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;
    cout << "Before function call, x = " << x << ", y = " << y << endl;

    swapValues(x, y);

    cout << "After function call, x = " << x << ", y = " << y << endl;

    return 0;
}
