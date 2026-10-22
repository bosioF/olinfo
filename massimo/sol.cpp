#include <vector>

using namespace std;

int trova_massimo(int N, vector<int> V) {
  int max = -1;
  for (int i = 0; i < N; i++) {
    if (V[i] > max) {
      max = V[i];
    }
  }

  return max;
}
