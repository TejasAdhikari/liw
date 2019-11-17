#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int T;
    cin >> T;
    while (T--) {
        long long int N;
        cin >> N;

        int* arr = new int[N]();
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i < N; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }

        int m = log2(N);

        cout << arr[m];
        
    }
}