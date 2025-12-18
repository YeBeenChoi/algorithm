// 11659
#include <iostream>
#include <vector>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); 
  cout.tie(NULL);
  
  int n, m;
  cin >> n >> m;

  vector<int> sum(n + 1, 0);

  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    sum[i] = sum[i - 1] + x;
  }
  
  while (m--) {
    int i, j;
    cin >> i >> j;
    cout << sum[j] - sum[i - 1] << '\n';
  }
}