#include <iostream>
#include <queue>
#include <vector>

using std::cin, std::cout, std::vector, std::queue;
using i64 = long long;

void solve(int t) {
  int N, M, K;
  cin >> N >> M >> K;

  vector<int> G(N);
  for (int i = 0; i < K; i++) {
    cin >> G[i];
  }

  vector<vector<int>> adj(N);
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<int> gossip(N, -1);
  queue<int> q;

  for (int i = 0; i < K; i++) {
    int start_n = G[i];

    if (gossip[start_n] == -1) {
      gossip[start_n] = i;
      q.push(start_n);
    }
  }

  while (!q.empty()) {
    int current = q.front();
    q.pop();

    if (gossip[current] != -1) {
      for (int i = 0; i < adj[current].size(); i++) {
        int friend_n = adj[current][i];

        if (gossip[friend_n] == -1) {
          gossip[friend_n] = gossip[current];
          q.push(friend_n);
        }
      }
    }
  }

  i64 ris = 0;
  for (i64 i = 0; i < N; i++) {
    ris += gossip[i] * (i + 1);
  }

  cout << "Case #" << t << ": " << ris << "\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  freopen("gossip_input_1.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    solve(t);
  }
}
