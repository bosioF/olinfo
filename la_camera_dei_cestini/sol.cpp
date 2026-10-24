#include <iostream>
#include <queue>
#include <vector>

using std::cin, std::cout, std::string, std::queue, std::vector;

void solve(int t) {
  int N, M, Q;
  cin >> N >> M >> Q;

  string S;
  cin >> S;

  vector<vector<char>> cestini(M);
  for (char c : S) {
    cestini[0].push_back(c);
  }

  string ans = "";

  char op;
  int a, b;
  for (int i = 0; i < Q; i++) {
    cin >> op >> a >> b;

    if (op == 's') {
      char top = cestini[a].back();
      cestini[a].pop_back();
      cestini[b].push_back(top);
    } else if (op == 'c') {
      ans += cestini[a][b];
    }
  }

  cout << "Case #" << t << ": " << ans << "\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  freopen("cestini_input_1.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    solve(t);
  }
}
