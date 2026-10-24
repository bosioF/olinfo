#include <unordered_map>

using std::unordered_map;

unordered_map<long long int, int> conteggio;

void aggiungi(long long int id) { conteggio[id]++; }

void togli(long long int id) {
  if (conteggio[id] > 0) {
    conteggio[id]--;
  }
}

int conta(long long int id) { return conteggio[id]; }
