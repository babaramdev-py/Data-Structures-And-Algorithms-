#include <bits/stdc++.h>

using namespace std;

string solution(int U, int L, const vector<int> &C) {
    int N = C.size();
    vector<vector<int>> A(2, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        if (C[i] == 0) {
            A[0][i] = 0;
            A[1][i] = 0;
        } else if (C[i] == 2) {
            A[0][i] = 1;
            A[1][i] = 1;
            U--;
            L--;
        } else if (C[i] == 1) {
            if (U > L) {
                A[0][i] = 1;
                U--;
            } else {
                A[1][i] = 1;
                L--;
            }
        }
    }

    if (U < 0 || L < 0 || U > 0 || L > 0) {
        return "IMPOSSIBLE";
    }

    if (U == 0 && L == 0) {
        string ans = "";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < N; j++) {
                ans += char(A[i][j] + '0');
                if (j < N - 1) {
                    ans += ',';
                }
            }
            if (i < 1) {
                ans += ',';
            }
        }
        return ans;
    }

    return "IMPOSSIBLE";
}

int main() {
    // Example usage:
    int U = 4;
    int L = 4;
    vector<int> C = {1, 1, 1, 1, 1, 2};

    string result = solution(U, L, C);
    cout << "Result: " << result << endl;

    return 0;
}
