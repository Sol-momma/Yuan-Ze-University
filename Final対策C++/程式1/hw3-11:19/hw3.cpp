#include <iostream>
#include <cassert>

using namespace std;

void foo(int& x, int& y) {
    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }
}

int main() {
    int x, y;
    int copy_x, copy_y;

    cin >> x >> y;
    copy_x = x;
    copy_y = y;
    foo(x, y);

    if (copy_x > copy_y) {
        assert(copy_x == x && copy_y == y);
    } else {
        assert(copy_x == y && copy_y == x);
    }
}


// Please leave the main function intact. Furthermore, please neither disable assertions nor call std::swap.
// main関数はそのままにしておいてください。さらに、アサーションを無効にしたりstd::swapを呼び出したりしないでください。
