#include <iostream>
#include <iomanip>

using namespace std;

double dp[25][25];

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i && j <= m; ++j) {
            dp[i][j] = 1.0;
            for (int x = 1; x < j; ++x) {
                dp[i][j] += dp[i - x][j - x] / i;
            }
        }
    }
    
    cout << fixed << setprecision(2) << dp[n][m] << endl;
    return 0;
}