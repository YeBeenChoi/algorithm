// 17129
#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); 
  cout.tie(NULL);
  
  int n, m;
  cin >> n >> m;

  map<string, string> idPassword;

  for (int i = 0; i < n; i++) {
    string id, pw;
    cin >> id >> pw;
    idPassword[id] = pw;
  }

  for (int j = 0; j < m; j++) {
    string x;
    cin >> x;
    cout << idPassword[x] << '\n';
  }
}