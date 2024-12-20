#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = x + 10;
    cout << "Inside the function, x = " << x << endl;
}

int main() {
    int num = 5;
    cout << "Before function call, num = " << num << endl;

    modifyValue(num);

    cout << "After function call, num = " << num << endl;

    return 0;
}
