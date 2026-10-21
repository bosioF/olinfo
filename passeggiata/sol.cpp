#include <algorithm>
#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector;
using i64 = long long;

void solve(int t) {
  int N;
  cin >> N;

  vector<i64> L(N);
  for (int i = 0; i < N; i++) {
    cin >> L[i];
  }

  vector<i64> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }

  i64 min_p = P[0];
  i64 total_cost = 0;

  for (int i = 0; i < N; i++) {
    min_p = std::min(min_p, P[i]);
    total_cost += L[i] * min_p;
  }

  cout << "Case #" << t << ": " << total_cost << "\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  freopen("passeggiata_input_1.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    solve(t);
  }
}
