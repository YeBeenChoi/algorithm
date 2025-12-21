// 11286
#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

struct compare {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b)) {
      return a > b;
    } else {
      return abs(a) > abs(b);
    }
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); 
  cout.tie(NULL);
  
  priority_queue<int, vector<int>, compare> pq;

  int n, x;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x != 0) {
      pq.push(x);
    } else if (x == 0) {
      if (pq.empty()) {
        cout << '0' << '\n';
      } else {
        cout << pq.top() << '\n';
        pq.pop();
      }
    }
  }
}