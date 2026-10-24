#include <iterator>
#include <set>

using std::set;

set<long long> autogrill;

void inizia() {
  autogrill.clear();
  return;
}

void apri(long long p) {
  autogrill.insert(p);
  return;
}

void chiudi(long long p) {
  autogrill.erase(p);
  return;
}

long long chiedi(long long p) {
  if (autogrill.empty()) {
    return -1;
  }

  auto it = autogrill.lower_bound(p);

  if (it == autogrill.end()) {
    return *std::prev(it);
  }

  if (it == autogrill.begin()) {
    return *it;
  }

  long long successivo = *it;
  long long precedente = *std::prev(it);

  if (successivo - p < p - precedente) {
    return successivo;
  } else if (successivo - p == p - precedente) {
    return successivo;
  } else {
    return precedente;
  }
}
