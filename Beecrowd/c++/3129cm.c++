#include <iostream> 
#include <set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 3 || n > 10000) {
        cout << "n deve estar entre 3 e 10000\n";
        return 0;
    }

    vector<int> vet(n);
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    set<int> mapa(vet.begin(), vet.end());
    cout << mapa.size() << endl;

    int somaRepete = 0;
    for (int x : mapa) {
        int cnt = 0;
        for (int y : vet) {
            if (x == y) {
                cnt++;
            }
        }
        somaRepete += cnt - 1;
    }
    cout << somaRepete << endl;

    return 0; 
}