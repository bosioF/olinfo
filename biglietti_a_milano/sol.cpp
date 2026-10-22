#include <algorithm>
#include <assert.h>
#include <stdio.h>

using i64 = long long;

int compra(int N, int M, int A, int B) {
  i64 ris1 = N * A;
  i64 ris2 = (N / M) * B + (N % M) * A;
  i64 ris3 = ((N / M) + 1) * B;

  i64 ris = std::min(ris1, ris2);
  ris = std::min(ris, ris3);

  return ris;
}

int main() {
  FILE *fr, *fw;
  int N, M, A, B;

  fr = fopen("input.txt", "r");
  fw = fopen("output.txt", "w");

  assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

  fprintf(fw, "%d\n", compra(N, M, A, B));
  fclose(fr);
  fclose(fw);
  return 0;
}
