#include <iostream>

using std::cin, std::cout;

void solve(int t) {
  int N;
  cin >> N;

  int taxi = 0;
  int g_prece = -1;
  int G = 0;

  for (int n = 0; n < N; n++) {
    cin >> G;
    if (G != g_prece) {
      taxi++;
      g_prece = G;
    }
  }

  cout << "Case #" << t << ": " << taxi << "\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  freopen("taxi_input_1.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    solve(t);
  }
}
