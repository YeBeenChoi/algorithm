// 1074
#include <iostream>
#include <cmath>
using namespace std;

int n, column, row;
int res = 0;

void dnc(int x, int y, int size) {
  if (column == x && row == y) {
    cout << res << '\n';
    return;
  } else if (column < x + size && row < y + size && column >= x && row >= y) {
    dnc(x, y, size / 2);
    dnc(x, y + size / 2, size / 2);
    dnc(x + size / 2, y, size / 2);
    dnc(x + size / 2, y + size / 2, size / 2);
  } else {
    res += size * size;
  }

}


int main() {
  cin >> n >> column >> row;
  dnc(0, 0, pow(2, n));

}