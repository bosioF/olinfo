// NOTA: si raccomanda di usare questo template anche se non lo si capisce completamente.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // decommenta le due righe seguenti se vuoi leggere/scrivere da file
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        int N;
        cin >> N;

        vector<int> L(N);
        for (int i = 0; i < N; ++i)
            cin >> L[i];

        vector<int> P(N);
        for (int i = 0; i < N; ++i)
            cin >> P[i];

        long long ris = 0;


        // INSERISCI IL TUO CODICE QUI


        cout << "Case #" << test << ": ";
        cout << ris << endl;
    }

    return 0;
}
