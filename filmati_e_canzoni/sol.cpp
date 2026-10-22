#include <iostream>

using std::cin, std::cout;

void solve(int t) {
  int N, F, C;
  cin >> N >> F >> C;

  int f = N / F;
  int c = (N % F) / C;

  cout << "Case #" << t << ": " << f << " " << c << "\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  freopen("download_input_6.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    solve(t);
  }
}
