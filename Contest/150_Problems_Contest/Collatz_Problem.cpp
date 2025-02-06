#include <iostream>
#define N 1000000
using namespace std;
int main() {
    int s;
    cin >> s;
    int sequence[N];
    sequence[0] = s;
    for (int i = 1;; i++) {
        int current = sequence[i - 1];
        if (current % 2 == 0) {
            current = current / 2;
        } else {
            current = 3 * current + 1;
        }
        for (int j = 0; j < i; j++) {
            if (sequence[j] == current) {
                cout << i + 1 << endl; 
                return 0;
            }
        }
        sequence[i] = current;
    }
    return 0;
}
