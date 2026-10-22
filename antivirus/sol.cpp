#include <iostream>
#include <string>
#include <vector>

#define FILES 4

using std::cin, std::cout, std::vector, std::string;

void solve(int t) {
  int len1, len2, len3, len4;
  int len_virus;

  cin >> len1 >> len2 >> len3 >> len4;
  cin >> len_virus;

  vector<string> N(FILES);

  for (int i = 0; i < FILES; i++) {
    cin >> N[i];
  }

  for (int i = 0; i <= len1 - len_virus; i++) {
    string virus = N[0].substr(i, len_virus);

    size_t p2 = N[1].find(virus);
    size_t p3 = N[2].find(virus);
    size_t p4 = N[3].find(virus);

    if (p2 != string::npos && p3 != string::npos && p4 != string::npos) {
      cout << "Case #" << t << ": " << i << " " << p2 << " " << p3 << " " << p4
           << "\n";
    }
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  freopen("antivirus_input_1.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    solve(t);
  }
}
