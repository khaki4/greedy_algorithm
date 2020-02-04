#include <iostream>
using namespace std;

int main() {
    int n, k;
    int totalCoinCount = 0;

    cin >> n >> k;
    int* coins = new int[n];

    for (int i = 0; i < n; i++) cin >> coins[i];

    for (int i = n - 1; i > -1; i--)
    {
        const int coin = coins[i];
        if (k >= coin)
        {
            totalCoinCount += k / coin;
            k %= coin;
        }
    }

    cout << totalCoinCount << endl;

    delete[] coins;
    
    return 0;
}
